2023-05-19 - 15:58

Type: #atomicIdea 
Tags: [[blueprints]], [[interact]]

---
**References  / Sources:
- https://youtu.be/R7oLZL97XYo | How To Select (Highlight) Other Actors/Objects By Looking At Them In Unreal Engine 5
---
## Create and configure the Blueprint inteface:
	
	![[HighlightActors_Looking_1.png]]
	### Rename the inteface to something usefull:
	![[HighlightActors_Looking_2.png]]
	### Open the interface asset and create a new function in the functions side pannel:
	![[HighlightActors_Looking_3.png]]
	### Give it a propper name:
	![[HighlightActors_Looking_4.png]]
	## Add another function for deselction:
	![[HighlightActors_Looking_5.png]]
	## Add yet another function for an 'Is selected?' state check:
	![[HighlightActors_Looking_6.png]]
	## Create a new output on for the isSelected variable:
	![[HighlightActors_Looking_7.png]]
	## Name it 'Is selected?'
	![[HighlightActors_Looking_8.png]]
	![[HighlightActors_Looking_9.png]]

## Create and confirure the parent intecactable Blueprint Actor:
	![[HighlightActors_Looking_10.png]]
	
	![[HighlightActors_Looking_11.png]]
	
	![[HighlightActors_Looking_12.png]]
	![[HighlightActors_Looking_13.png]]

## Add a Decal component to Parent_Selectable_Actor:
	![[HighlightActors_Looking_14.png]]
	
	![[HighlightActors_Looking_15.png]]
	
	![[HighlightActors_Looking_16.png]]

## Create the selction higlight Material asset:
	
	![[HighlightActors_Looking_17.png]]
	### Change the material domain to Deffered Decal: 
	![[HighlightActors_Looking_18.png]]
	
	![[HighlightActors_Looking_19.png]]
	Change the blend mode to Translucent:
	![[HighlightActors_Looking_20.png]]
	Hold '3' and click to add a Constant3Vector value:
	![[HighlightActors_Looking_21.png]]
	Hold '1' and left click to add a constant value:
	![[HighlightActors_Looking_22.png]]
	
	![[HighlightActors_Looking_23.png]]
	
	![[HighlightActors_Looking_24.png]]

## Configure visibility of higlight Decal component on Parent_Selectable_Actor: 
	![[HighlightActors_Looking_25.png]]
	
	![[HighlightActors_Looking_26.png]]

## Configure implemented Interface on Parent_Selectable_Actor BP:
	![[HighlightActors_Looking_27.png]]
	
	![[HighlightActors_Looking_28.png]]
	
	![[HighlightActors_Looking_29.png]]

## Set visibility of decal material using Select/Deselect Interface events in Parent_Selectable_Actor BP:
	![[HighlightActors_Looking_30.png]]
	
	![[HighlightActors_Looking_31.png]]
	
	![[HighlightActors_Looking_32.png]]
	
	![[HighlightActors_Looking_33.png]]
	
	![[HighlightActors_Looking_34.png]]
	
	![[HighlightActors_Looking_35.png]]
	
	![[HighlightActors_Looking_36.png]]
	
	![[HighlightActors_Looking_37.png]]
	
	![[HighlightActors_Looking_38.png]]

## Create and configure Child Blueprint Class from Parent_Selectable_Actor:
	![[HighlightActors_Looking_39.png]]
	
	![[HighlightActors_Looking_40.png]]
	
	![[HighlightActors_Looking_41.png]]
	
	![[HighlightActors_Looking_42.png]]
	
	![[HighlightActors_Looking_43.png]]
	
	![[HighlightActors_Looking_44.png]]
	
	![[HighlightActors_Looking_45.png]]

## Line trace Select/ Deselect (Interface events) behaviour on Click event in Player Character BP:
	![[HighlightActors_Looking_46.png]]
	
	![[HighlightActors_Looking_47.png]]
	
	![[HighlightActors_Looking_48.png]]
	
	![[HighlightActors_Looking_49.png]]
	
	![[HighlightActors_Looking_50.png]]
	
	![[HighlightActors_Looking_51.png]]
	
	![[HighlightActors_Looking_52.png]]
	
	![[HighlightActors_Looking_53.png]]
	
	![[HighlightActors_Looking_54.png]]
	
	![[HighlightActors_Looking_55.png]]
	
	![[HighlightActors_Looking_56.png]]
	
	![[HighlightActors_Looking_57.png]]
	
	![[HighlightActors_Looking_58.png]]
	
	![[HighlightActors_Looking_59.png]]
	
	![[HighlightActors_Looking_60.png]]
	
	![[HighlightActors_Looking_61.png]]
	
	![[HighlightActors_Looking_62.png]]
	
	![[HighlightActors_Looking_63.png]]
	
	![[HighlightActors_Looking_64.png]]
	
	![[HighlightActors_Looking_65.png]]
	
	![[HighlightActors_Looking_66.png]]
	
	![[HighlightActors_Looking_67.png]]
	
	![[HighlightActors_Looking_68.png]]
	
	![[HighlightActors_Looking_69.png]]
	
	![[HighlightActors_Looking_70.png]]
	
	![[HighlightActors_Looking_71.png]]

## Add Decal material to Parent_Selectable_Actor:
	![[HighlightActors_Looking_72.png]]
## Disable 'Recieve Decals' on floor:
	![[HighlightActors_Looking_73.png]]
	
	![[HighlightActors_Looking_74.png]]
## Create and use 'SelectedActor' variable in player charcter BP:
	![[HighlightActors_Looking_75.png]]
	
	![[HighlightActors_Looking_76.png]]
	Change  variable type to 'Actor':
	![[HighlightActors_Looking_77.png]]
	
	![[HighlightActors_Looking_78.png]]
	
	![[HighlightActors_Looking_79.png]]
	
	![[HighlightActors_Looking_80.png]]
	
	![[HighlightActors_Looking_81.png]]
	
	![[HighlightActors_Looking_82.png]]
	Get SelectedActor:
	![[HighlightActors_Looking_83.png]]
	
	![[HighlightActors_Looking_84.png]]
	
	![[HighlightActors_Looking_85.png]]
	
	![[HighlightActors_Looking_86.png]]
	
	![[HighlightActors_Looking_87.png]]
	
	![[HighlightActors_Looking_88.png]]
	
	![[HighlightActors_Looking_89.png]]
	
	![[HighlightActors_Looking_90.png]]
	
	![[HighlightActors_Looking_91.png]]
	
	![[HighlightActors_Looking_92.png]]
	
	![[HighlightActors_Looking_93.png]]
	
	![[HighlightActors_Looking_94.png]]
	
	![[HighlightActors_Looking_95.png]]
	
	![[HighlightActors_Looking_96.png]]
	
	![[HighlightActors_Looking_97.png]]
	
	![[HighlightActors_Looking_98.png]]
	
	![[HighlightActors_Looking_99.png]]
	
	![[HighlightActors_Looking_100.png]]
	
## Create the HUD crosshair element:
	
	![[HighlightActors_Looking_101.png]]	
	
	 ![[HighlightActors_Looking_102.png]]
	
	![[HighlightActors_Looking_103.png]]
	
	![[HighlightActors_Looking_104.png]]
	![[HighlightActors_Looking_105.png]]![[HighlightActors_Looking_106.png]]![[HighlightActors_Looking_107.png]]
	![[HighlightActors_Looking_108.png]]![[HighlightActors_Looking_109.png]]![[HighlightActors_Looking_110.png]]![[HighlightActors_Looking_111.png]]


## Display UI element on viewport:
	![[HighlightActors_Looking_112.png]]![[HighlightActors_Looking_113.png]]![[HighlightActors_Looking_114.png]]![[HighlightActors_Looking_115.png]]
## Change Higlight display from mouse input event to custom 'CheckSightline' event
	![[HighlightActors_Looking_116.png]]
	
	![[HighlightActors_Looking_117.png]]
	
	![[HighlightActors_Looking_118.png]]
	
	![[HighlightActors_Looking_119.png]]
	
	![[HighlightActors_Looking_120.png]]
	
	![[HighlightActors_Looking_121.png]]
	
	![[HighlightActors_Looking_122.png]]
	
## Parent Target object to camera on button press using 'SelectedActor' variable:
	![[HighlightActors_Looking_123.png]]![[HighlightActors_Looking_124.png]]![[HighlightActors_Looking_125.png]]
	
	![[HighlightActors_Looking_126.png]]
	
	![[HighlightActors_Looking_127.png]]
	
	![[HighlightActors_Looking_128.png]]
	
	![[HighlightActors_Looking_129.png]]
	
	![[HighlightActors_Looking_130.png]]
	
	![[HighlightActors_Looking_131.png]]

	![[HighlightActors_Looking_132.png]]
	
	![[HighlightActors_Looking_133.png]]
	
	![[HighlightActors_Looking_134.png]]
	
	![[HighlightActors_Looking_135.png]]
	
	![[HighlightActors_Looking_136.png]]
	
	![[HighlightActors_Looking_137.png]]