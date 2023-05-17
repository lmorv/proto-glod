2023-04-21 - 12:02

Type: #notes
Tags: [[ue5]] [[interact]] [[ui]]

---

**References / Sources:**
- [How To Create An Interact Dot Crosshair - Unreal Engine 4/5 Tutorial](https://youtu.be/353PF7IRiu8)
---

## Creating the Widget asset:
1. Import .png texture asset:
![[interactDot_01.png]]

2. Create Widget Blueprint:
![[interactDot_02.png]]
User Widget type is the only type available:
	![[interactDot_03.png]]

3. Add a canvas panel to the hierarchy:
![[interactDot_04.png]]

4. And also add an Image to the hierarchy: 
![[interactDot_05.png]]

5. Select the .png texture asset in the details panel.
	1. Also adjust the size of the image.
![[interactDot_06.png]]

Use the Anchor options to align the image to the center of the canvas:
		Adjust position as necessary.
	![[interactDot_07.png]]


## Crafting Blueprint Logic:

1. Add an Event BeginPlay node to the character's event graph (P + Right Click OR Left Click to search).
![[interactDot_08.png]]
	- Use the Sequence node to add the interact dot functionality after existing behavior.
	![[interactDot_09.png]]

2. Connect to a Create Widget node:
![[interactDot_10.png]]
	- Use the image texture asset as in the class field:
	![[interactDot_11.png]]
	- Promote 'Return Value' output pin to a variable by right-clicking the pin.
	![[interactDot_12.png]]
	- Give it a proper name.
	![[interactDot_13.png]]

3. Add an Event Tick node to the graph.
![[interactDot_14.png]]

4. Drag and drop the interact dot widget variable from the side panel into the graph and choose 'Get'. 
	- Hold control and drag to 'Get' it automatically.
![[interactDot_15.png]]

5. Right-click the variable node and convert it to a Validated Get, then connect it to the Event Tick.
![[interactDot_16.png]]

6. Add a Line Trace By Channel node.
	- This is to figure out where the camera is pointing. 
![[interactDot_17.png]]
7.  Drag and drop and Get the character's camera component.
![[interactDot_18.png]]
	- Use a Get WorldLocation node on the camera and connect the return value to the Start Pin of Line Trace By Channel. 
	![[interactDot_19.png]]
	- Use an addition node on the World Location and connect it to the End Pin.
	![[interactDot_20.png]]

8. Get the Forward Vector of the camera.
	- This represents the orientation of the camera. 
![[interactDot_21.png]]
	- Multiply the Forward vector by a float value (Convert pin to a Float by right-clicking it).
	![[interactDot_22.png]]

9.  This value represents how far away forward the interaction is allowed to occur. In this case 500 units. 
	-  This value is added to the world location of the camera to determine the end point of the Line Trace By Channel.
![[interactDot_23.png]]

![[interactDot_24.png]]

![[interactDot_25.png]]

![[interactDot_26.png]]

![[interactDot_27.png]]

![[interactDot_28.png]]

![[interactDot_29.png]]

![[interactDot_30.png]]

![[interactDot_31.png]]

![[interactDot_32.png]]

![[interactDot_33.png]]

![[interactDot_34.png]]

![[interactDot_35.png]]

![[interactDot_36.png]]

![[interactDot_37.png]]

![[interactDot_39.png]]


## Create Interface Asset:
![[interactDot_40.png]]

![[interactDot_41.png]]

## Plug in the interface asset into the Blueprint logic. 
![[interactDot_42.png]]

![[interactDot_43.png]]

## Create Interactable Actor:
![[interactDot_44.png]]

![[interactDot_45.png]]

![[interactDot_46.png]]

![[interactDot_47.png]]

![[interactDot_48.png]]

![[interactDot_49.png]]

---

**References / Sources:**
- [How To Create An Interact Dot Crosshair - Unreal Engine 4/5 Tutorial](https://youtu.be/353PF7IRiu8)