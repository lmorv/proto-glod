## These are lists of things to do

- ~~Replace character in third person template with little robot guy (from the StackOBot project).~~
- ~~Rig Void Being model for further character tests.~~
- ~~Replace third person character with Void Being model.~~

- Block out prototype level based on library layout.
- Conceptualize character design.
- Implement prototype NPC.
- Implement dialogue on NPC.

---
- Implement targeting system (object detection).
- Implement mesh swapping system.

---
Bugs:
- Void Being's feet are not planted on the ground.

- [Stack Bot's input controls are completely out of whack](https://lm-vega.itch.io/protoglod-character-controls-bug)

## Production Schedule

### Spring Sprint:
|Discipline / Week| W1 March 12-19 | W2 March 20-26 | W3 March/April 26-2 | W4 April 3-9 | W5 April 10-16 | W6 April 17-23 | W7 April 24-30 |
|--------|--------|--------|--------|-------|------|--------|--------|
| Level Design |--------| level block-out iteration <br/> - In-engine layout|--------|-------|------|--------|--------|
| Visual Development |--------|--------|Main character design <br/> - rough concepting|-------|------|--------|Main character design <br/> - final key art, turnabout technical drawings|
| Gameplay Programming / Narrative Design |--------|--------|--------|Targeting system technical investigation <br/> - Ray-casting, object detection| NPC technical investigation <br/> - extend player class, idle animation | Dialogue technical investigation <br/> - proximity + player orientation trigger, UI text box | -------- |
| Character Art / Asset Creation |--------|--------|--------|-------|------| Bug Fixing <br/> Void Being feet floating | Experiment with Metahuman character asset creation based on concept art |
| Documentation / Analysis | Ongoing MDM tracking | Ongoing MDM tracking | Ongoing MDM tracking | Ongoing MDM tracking | Ongoing MDM tracking | Ongoing MDM tracking | Ongoing MDM tracking |
| Planning |Spring and Summer task planning |--------|--------|-------|------|--------|--------|
Note: Classes end April 17
-- 
---

### Summer Sprint:
|Discipline / Week| W1 May 10-14 | W2 May 25-21 | W3 May 22-28 | W4 May/June 28-4 | W5 June 5-11 | W6 June 12-18 | W7 June 19-25 | W8 June/July 26-2 |
|--------|--------|--------|--------|-------|------|--------|--------|-------|
| Level Design |--------|--------| Block-out iteration, 'Dungeon' layout ideation <br/> - Expand on prototype level thinking about environmental puzzle and exploration mechanics (sketches, grey-boxing)| Stablish DCC integration workflow <br/> - Start environment exploration in Blender based on concept art and integrate to engine |------|--------|--------|-------|
| Visual Development |--------| Interior environment concepting <br/> - Create initial concept art trying to build a sese of place. |--------|-------|------|--------|--------|-------|
| Gameplay Programming / Narrative Design | Targeting system iteration, mesh swapping experimentation <br/> - Continue implementation of targeting system <br/> - Build mesh swapping controls on targeting system* | NPC/ Dialogue <br/> - Continue implementation and iteration of NPC dialogue | Experiment with level transition and trigger volumes |-------| Writing/ story/ fabulative design <br/> - Story progression brainstorm/ outline <br/>  - World building |--------|--------|-------|
| Character Art / Asset Creation |--------|--------|--------| Experiment with Metahuman character integration | Character Modeling <br/> - Blockout | Character Modeling <br/> - Refine | Character Texturing <br/> - Texture paint and surface maps | Character Rigging and integration |
| Documentation / Analysis | Ongoing MDM tracking | Ongoing MDM tracking | Ongoing MDM tracking | Ongoing MDM tracking | Ongoing MDM tracking | Ongoing MDM tracking | Ongoing MDM tracking | Ongoing MDM tracking <br/> - Independent study retrospective |
**Note:** Concordia Academic Dates Summer 2023: Term 1:  May 10 - July 2. Term 2: July 3 - August 10
--
* *Create Static Mesh Getting and Setting system on button press event for targeted objects. 