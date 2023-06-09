# These are reflections on the deeper questions in life
 
### 01 - The many ways of getting a player character into the game and why it matters to me

I'm looking at two main workflows for integrating custom characters into the game; each is borne out of the context of the assets that make up the character I'm working with. And working out the kinks of each will hopefully give me a larger tool kit to affect the tone and feel of the game.

The first approach involved migrating the constituent parts of the existing Stack Bot character from the StackOBot project that can be found in the Unreal Marketplace. I'm jumping off from the base knowledge found in this tutorial series: [build a third person character from scratch.](https://dev.epicgames.com/community/learning/courses/kry/unreal-engine-build-a-third-person-character-from-scratch)

The second approach involved replacing the mesh of the mannequin (Quinn) character, that comes with the third person template, with my own character model --rigged using the same skeleton hierarchy as the mannequin. As illustrated in this demo of the Game Rig Tools addon for Blender: [Game Rig Tools - Demo.](https://youtu.be/U23WyAd8o_8)

Writing this I feel like I am trying to justify my haphazard explorations with some vague idea of a larger creative master plan. If I am being honest with myself I am just curious to see what happens with either approach. I wanna master them just for the sake of learning them, and seeing where they break and seeing if I can fix them.

Sure, it would be great if I could ultimately combine the animation assets of the Stack Bot, and it's enhanced input system (whatever that might mean for my iterative control and expandability of features) with the base blueprints that are already in place for Many and Quinn (the Unreal mannequins). I like the more stylized look of the Stack Bot's movements over the realistic animations of Quinn, I think. Although I can also see a place for realism later on, I think I want to establish a more unique aesthetic as a first goal.

I want it to be easy for me to iterate on the character model's mesh and rig on whatever in-flux set-up I end up with. But that might not happen exactly as I want it to, and my wishes might prove unrealistic, and the complexity might just be there no matter what I do. I think though, that my best chance at success is to get really familiar with the ins and outs of as many intersecting workflow processes and systems as I can.

And hopefully I can also make progress horizontally, on the overall vision, developing the other domains of the game in parallel to build up a cohesive whole. More on that later I guess.

### 02 - Shaders OMG!

I learned how to make gradients with emissive color from these two tutorials: 

- [Character Gradient Shader - Codekitten. ](https://youtu.be/gI7UEqJ-jrk)

- [Dynamic Gradients - tharlevfx. ](https://youtu.be/P_HL_rIWulo)

And It is sooooo fun! Shader work has been kind of a nice respite from character integration work, it is not only a very satisfying result but also a very straightforward process that I've been applying to other projects and getting a ton of milage out of. I am looking forward to experimenting more with creating materials in the future. The possibilities are endless!!

I feel like I tend to gravitate towards the shiny visual parts of games in general, style and the mood that style creates is a big factor when choosing what to play and what to make. And I am really eager to start work for real on the visual development, art-direction-y part of the project. I want to balance how much time I spend planning and how much time I spend implementing things, and I feel like I tend to view my personal priority to be the aesthetics of a thing rather than the functionality. I'm trying to strike more of a balance without forcing myself to spend an ungodly amount of time in tech-land either.

03 - Why 'Darklit (Lite)'? & why is my brain like this?

I made this page on itch.io while thinking about narrative design on the gameboy: [Protoglod: Darklit (Lite)](https://lm-vega.itch.io/proto-glod-darklit-lite)

My thoughts about ways to of materializing the story of the game in a low-fi format concided and where co-created by the ocurrence of the second instalment of the solar gameboy game jam run by some collegues at TAG.  I wanted to participate and made a tenuous attempt at thinking within their framing of retro gameing and solar game design.  

This is what I wrote there:

"Proto-Glod: Darklit (Lite) is the 2D, top-down, pixel art version of --game in development-- Proto-Glod: Awakening (3D). This variant built for gameboy and web platforms is mainly a way to explore the purely narrative components of exploration and quest-driven gameplay, and as a way to introduce possible solar media features into the Proto-Glod game concept.  Some of those features are more speculative than others, and Proto-Glod: Darklit (Lite) is meant as an extension, and a compact variant, of the 3D game in ongoing materialization using Unreal Engine 5. The story beats may differ in the 2D and 3D games,  as well as the gameplay and delivery of the narrative experience."

Since then I've spoken to Michael about the hardware possibilities of the features I speculate about. It turns out that getting information about battery levels in the gameboy could be tricky, but perhaps doable. There are cartriges that have an integrated timer for example. Perhaps a hardware solution could be built between the solar battery circuit and the game process, that keeps a cycle that 'coincides' with mesured depletion rates pf energy. I also put foth the possibility of building a bootleg 'gemboid' using a raspberry pi and a gameboy emulator.

And anyway I think that brings me to the second question in the title. To which the answer is of course is; 'I do not know'. I'm gonna keep pushing forward (or in some direction) despite the clear drawbacks of its existance, and its cursed state.


