## Proto Glod - Development Journal

### Jan 26, 2023 - I'm Excited!

I'm excited about this project on multiple levels. From a narrative perspective I am very excited about exploring the story. The mythological themes, the modern-day setting, the surreal directions it could go, fleshing out the main character's journey, developing the silly/existential tone, and finding entreating ways to deliver the narrative. Which ties in with the technical side, for which I am also very excited. After messing around in Unreal for a while, I am eager to dig deeper into it's inner workings, and to having a solid excuse to intentionally design and build game interactions with it. 

This concept started out pretty off-handedly; I wrote the logline months ago as part of an exercise on writing Research Creation project proposals with a randomly assigned theme. My theme was AI Art generation. I conceived of a project where I made use of as many AI art tools as possible in a 'real' production to determine their strengths and limitations while investigating the ethical implications of such tools, through interviews and case studies. The final product would be a sort of documentary, or video essay report relating my journey and findings, rather than a finished game. But very soon after, I found myself thinking that this story deserved better than that. And that if I made it, I wouldn't want it's development to be limited to, and strictly funneled through the existing AI tools. Which is sort of the conclusion that I expected to reach, or the 'hypothesis' of the original proposal. So there's surely something to learn from the AI tools of the future.

I have so many ideas, and I am also slightly afraid of how exponentially complicated I could make it on myself. The more I sit with this concept the the more I fall in love with it, and the more possibilities I uncover.  I want to get a good handle on the core mechanics, and a good feel for the foundational elements of the narrative systems. But extrapolating and endlessly conceptualizing is gonna be hard to resist.

### Jan 28, 2023 - A breakthrough and too many ideas.

I've been low-key struggling to picture the way dialogue from Tezcatlipoca is delivered. I thought that maybe it could come from people whose heads you have replaced with objects at first, or as a disembodied voice, sometimes coming from objects or inside your oen head. But it's always been nebulous in my mind. 

Well I just had a breakthrough! I thought that it would be a good idea to have Tezcatlipoca's dialogue delivered mainly through the book. As a sort of archive of information about your powers, events, responses to your actions, tutorials, etc. 

For example; the first time you change someone's head into a chair, the book could show an '!' icon and then deliver Tezcatlipoca's observations in a floating UI box:

>"Oh that's interesting! The 'chair' was attached upside-down to that human's neck. Perhaps the object remembers that the 'backrest' should go against the wearer's back. I wonder if you'll eventually be able to control the orientation of things you swap out..." 

Maybe there can be options in the dialogue box. Like the possibility to ask "Who are you?" to the book.

>"I don't go around telling people what I call myself as a rule. Although I always break my rules... But this time I might not! Wait. That would also break the rules... I'll get back to you on that one."

The idea is to have leave the mythological associations sort-of vague, and unimportant even when they are revealed. Like nobody knows who Tezcatlipoca is, and nobody cares. Yet they quietly tune the dials of reality in favour of disarray, and their influence ensures that no matter the current conditions; the outcome is never 100% set in stone.

---
On a separate train of thought, I was thinking of fail states and enemy mechanics. The police will chase you around and try to catch you, while you try to turn their heads into inanimate objects.

I was thinking that it would be cool and highly ambitious if when they did catch you, maybe you have a chance to wiggle away, but if you fail you go into Time Out! 

In Time Out you are put in increasing levels of solitary confinement. Every time you escape, the police realize your true power and increase their containment measures (up to a limit where you actually cannot escape, thinking at least a little bit realistically). As a last resort you can choose to restart from a checkpoint with people's knowledge of your potential erased.

### Feb 16, 2023 - Conversations with friends

At a bar about a week ago my friend David pointed out the parallel of the library setting with the Archives from the University, in the fantasy book series The Name of the Wind by Patrick Rothfuss. The conversation made me very exited about unlock flows and environmental puzzles in the style of TLOZ. And it made me see the larger idea of  places of mystery and cosmic power in a new light. I have as a reference the Federal Bureau of Control from Control that is a very borgesian space (obviously Borge's infinite library comes to mind as well) that acts as a portal between cosmic realms. The Archives, as well as the FBC, and the Water Temple hold arcane mysteries and knowledge. Sources of power and peril for the player/protagonist.

On the sillier side my friend Cesar suggested that I explore the "having to be silent in a library" mechanic in some way. Like trying to get people kicked out by the security guard and the staff, by using your powers to get a loud reaction out of them. What would you do if your coffee tumbler turned into a shoe? maybe different people have a higher threshold for paranormal occurrences and some wouldn't be impressed. Maybe they are reading a book called "Exposure therapy for arachnophobia"-- turn their pencil case into a spider for a big reaction.

Thinking about NPCs and the type of people that one might encounter at libraries opens a whole world of narrative possibilities. I'm already thinking of a couple of human and non-human characters and archetypes that I might want to incorporate into the mix. The videogame series Yakuza that I've been co-playing with another friend (Zach) is a good reference for a story heavily driven by dialogue and complex character interactions. I have to remember to add a prototype NPC with some dialogue, maybe path finding, early on to discover how that's going to feel, and how I want it to go.

### Feb 18, 2023 - 3rd person character tech adventures 

This is a Discord chat conversation with my friend David about the various trials I encountered yesterday while integrating an existing Bot character, and all it's related assets from another UE project to replace the default 3rd person character in the project.

This was in part an exercise to get familiar with the workflow for doing this sort of thing, and also a way to approximate the game feel i'm looking for while I work on the level design. The Bot character has more of a 'child like' feel to it in both proportions and the way it's animated. So I think it will be useful to design the space with it as a reference as long as I don't have the final design and assets for the main character.

So here's what went down:

> **LeoMorV** - Today at 12:27 PM
[...]
I'm doing some 3rd person character stuff on my chaos demi-god game.
trynna replace the character with a little robot guy just as a test, I finally got all the assets to import correctly, and I fixed up some issues with the character blueprint class that where making it not compile.
**LeoMorV** — Today at 12:36 PM
Now I'm editing the 'default pawn class' in the main game mode to make it use the little bot's BP [blueprint]. And I am wondering if there's a way to choose what character BP to use based on a UI choice or something like that...
Also; I tried changing the default game mode, in the project settings, to a game mode that uses the bot character and it didn't work. So that's why I'm modifying the main game mode instead.

>**Leggs** — Today at 12:41 PM
the gamemode is set per level, so your level settings might've been overriding the project settings mode
for picking a character bp, you could set the default pawn to null and manually spawn and possess your own pawn  in response to e.g. a UI event 
**Leggs** — Today at 12:53 PM
did you ever watch The Green Knight?

>**LeoMorV** — Today at 1:00 PM
Yeah! It was great, and strange

>**Leggs** — Today at 1:00 PM
cool, I just remembered it exists and I meant to watch it, gotta get on that

>**LeoMorV**— Today at 1:24 PM
Defo recommend 👌 [Just like this tech adventures the movie is very unsatisfying in an interesting way, but I didn't wanna spoil that feeling for David. I'll ask for his thoughts after he's seen it.]
**LeoMorV** — Today at 1:58 PM
Okaay, so now I don't knw why my character is not taking any input 😩

>**Leggs** — Today at 2:27 PM
did you Possess it?
or you can check AutoPossess On Spawn or something like that

>**LeoMorV** — Today at 2:42 PM
Hmmm , I have "Auto Posses Player"  under the 'Pawn' options of the character blueprint. And I set it from 'Disabled' to 'Player 0'.

>**LeoMorV** — Today at 3:26 PM
I figured out that I needed to set the default input classes to the 'enhanced' ones cuz I am using the Enhanced Input plugin to set up the actions on the bot. Thankfully this doesn't affect the default third person game mode if I choose to switch back to it. But now the inputs are acting extremely whack...

>**Leggs** — Today at 4:45 PM
depends what "whack" means specifically, I've used enhanced input a bit so maybe I can help

>**LeoMorV** — Today at 8:07 PM
There's a lot of stuff going on at once contributing to the whack factor. I can show you next time we hang.

The funny thing is that, in the future, when I get to integrate the final character model, I'll probably use a slightly different method that will probably be simpler. It'll involve duplicating the main game mode and the default character blueprint and just replacing the mesh with a model rigged using the exact same bone structure as Quinn (the default character). I'll have to do some re-targeting, or some hacky workaround, to adapt the animations to the smaller proportions. 

But there's a reason why I think it's worth it to go through the trouble of integration the stack bot, and its animations and, its animation blueprint, using the enhanced input system and all. But anyway; this entry is getting very long and and convoluted --I'll leave that discussion for my first entry on 'why'.

And I'll have to remember to describe what the 'whack' is all about at the moment, just for the fun of it. Maybe as a sort of bug report to myself.

### March 2, 2023 -  Zooming waaay out

I sat down to try to write a "proper" design document for the game, or at least start an outline with the stuff that's in my head right now. And at the same time I looked up the admission requirements for a master's program in design at Concordia. I ended up trying to frame the design document as a thesis proposal, which lead me down a train of thought that forced me to consider why I am doing this specific project to begin with. And how it fits within my 'body of work' and what I want to explore, thematically, ideologically, technically, with my practice in the future.

This what I wrote (unorganized):

	> - 
		Portfolio of creative work, writing samples, a letter of intent and a five-page preliminary research proposal. https://www.concordia.ca/academics/graduate/design.html

	> ---

	> Working towards a unified multidisciplinary practice of digital speculative fabulation in the realms of Game and Experience Design with focus on multi-cultural representation and science-art communication.

	> Workflows
		Indie development - Spontaneity VS careful calculation,  of market trends.
		Tools.
		Processes.
		Qualitative Analysis.
		Design, elements of.
		Iteration.
		Building up to a philosophy of re-generative and generative creative production. 
		Ease of access to creative products and modes of production not necessarily motivated by profit.
		Games that are both fun and flashy, and artistic and authentic.
		Free and open-source.
		Cross-disciplinary.
		Dynamic creative structures, free-form, digital tools for collaboration and discourse.
		Sharing the process. Documentation. Conversation.
		Accountability and ownership.
		Process oriented - results oriented - value oriented - inclusion oriented - unifying vision - momentum - Follow-through.
		Science materiality.
		Post-colonial interpretations of cosmologies.

	> Ongoingness. 
		Timepunk - How we think about time, the present, the past and the future. Being present and responsive.
		Self and others.
		Agency.
		Narrative immersiveness as immersed in the context of our lives.
		Extending the notion of speculative fabulation to personal and culturally situated scenarios. - Fantastic fabulation. 

	> Projects:
	> - lucha-axolotl-door: world building and narrative systems design.
	> - Intrasensora: Analysis of sensations, sensorial experience design. Contemplations on cognition, behavior, emotions and movement.
	> - Proto-glod: Contemporary lens to Mesoamerican mythology and folk-legend storytelling.
	> - The Legend of Tepetlanchani.
	> - Post-echo (collaboration): Post-human, speculative fiction. Online multiplayer community building. Abundance and play. Violence subversion.
		- Core mechanics.
		- Architectural considerations:
			- Exploratory hellscapes. fantasy environments, non-Euclidean, super natural borgesian.
			- Library. Infinity.
			- Principles of design.
			- Appraisal, prospect, shelter, navigation, affordance, agency, composition, space, place, temporal aspect of the experience of places.

	> Narrative: 
	> - Phenomenology - consciousness and the objects of direct experience. Edmund Husserl, (phen).
	> - Thematic breakdown (breakdown of the themes).
		- Mythology, cosmovision (mythological worldview).
		Contemporary lens to Mesoamerican mythology and folk-legend fables.
	> -  Cultural intent.
	> - Speculative fabulation, research creation, science-art communication and exploration.
	> - Collective storytelling. Cross disciplinary collaboration.
	> - Testing ground for developing creative production processes for culturally poignant, historical, contemporary, digital narrative/ fabulative / experiences. Pedagogical, rooted in critical ideology. Contemporary Indigenous identity(?), representation.
	> - Community outreach - digital, physical. 
	> - Community defined evidence. 
	> - Communication of anthropological, historical and scientific data through experience-based interactive creative fabulation. World building, world worlding.
	> - Co-habitation, human and non-human.
	> - knowledge.
	> - Development, personality.
	> - The fantasy of non-standard, disruptive behavior.

	> Références :
	> - The fifth sun - Camila Townsend
	> - Staying with the trouble - Donna Haraway
	> - from eternity to here - Sean Caroll
		- Mindscape podcast.
	> - How physics makes us free - Jennan Ismael
		- the situated self.
	> - Le Guin UK (1996) The carrier bag theory of fiction. In: Glotfelty C and Fromm H (eds) The Ecocriticism Reader: Landmarks in Literary Ecology. Athens, GA: University of Georgia Press, pp. 149–154.

### march 4, 2023 - Some structure, still at a wide lens 

I suppose I am doing this in preparation for the future, I've written a lot of project proposals and started a lot of things. And now with the kick off of this project I am becoming impatient about my pacing in school. I don't know when I'll have the opportunity to apply to a master's program, but I guess going on a mad rush to define what my thesis proposal would look like does't hurt at this point. Also I want to prove to myself and others that I can do it. I honestly have no evidence that I can, which makes it hard for me to trust my conviction in carrying on here. This is getting too real.

Let's just move on to the part where I copy pase my progress on the draft:

	> #### Page 1: Broad objectives and ideological-operational groundwork.

	>> Q: What is the action? What are you doing within the field of inquiry that you propose? A: I am researching (concepts and techniques), creating based on my research, and analyzing what I create.

	> I am aiming to establish a unified multidisciplinary practice of digital speculative fabulation and sensory research-creation, in the realms of Game and Experience Design, with a focus on multi-cultural representation and science-art communication. To research concepts and techniques I will be making use of an iterative workflow approach. I will create a series of projects based on my research, and analyze what I create from a qualitative and functional perspective-- within the iterative cycles of development.


	> Extending the notion of Speculative Fabulation to personal and culturally situated creative effort -- Fantastic Fabulation. 

	> A spontaneous and conceptually rigorous iterative workflow approach . Contrasting with the over-calculated, profit driven, and rote development cycles, driven by market trends, in use by the industrial machinery of creative labor.

	> Being in conversation with a creative 'product' in development, the people creating it, and the culture at large.

	> Scientific themes embedded into culturally diverse, post-colonial interpretations of mythology and historical narratives. Modern theories of time, astrophysics, and the material sciences, as well as biology, neuroscience, and computation science.

	> The empirical analysis of sensation as it relates to Experience Design and the therapeutic application of interactive digital experiences.

	> The projects I propose are connected by thematic threads that are not immediately obvious, but that I consider foundational to my world view and interlinked in my reasoning surrounding culture and knowledge.

	> #### Pages 2,3,4: Projects --descriptions and components.

	> - **lucha-axolotl-door**: world building and narrative systems design within a fighting game project.
	> - **Intrasensora**: Analysis of sensations, sensorial experience design. Contemplations on cognition, behavior, emotions and movement.
	> - **Proto-glod**: Contemporary lens to Mesoamerican mythology and folk-legend storytelling.
	> - **The Legend of Tepetlanchani**: Mesoamerican folk tale spanning historical time scales.
	> - **Post-echo** (collaboration): Post-human, speculative fiction. Online multiplayer community building. Abundance and play. Violence subversion.

	> #### Page 5: summary, an attempt at coalescence.

### March 24, 2023 - Zooming back in

Right! So I spent some time building an Independent Project proposal for this project (that means that my work here will be officially tracked by the university and contribute credits towards my undergraduate degree). Which is very reassuring and also a little bit nerve-wrecking. It's reassuring because I feel like it injects a good amount of momentum into production, and it clears thing up in terms wat my next steps are. It's nerve wrecking because now my actions are tied to deliverable objective in a set period of time, and tied to an academic credit score. It feels like the stakes are higher and I think that's mostly good.

I am already a week behind schedule, which is indicative of the demand of other responsibilities as the semester comes closer to an end. I loaded the heavy duty task for a second 'summer sprint' where I'd focus more of my time on this, so it's not really a big deal. I'll just be missing out on more time for experimentation. 

I feel pretty good about the scheduling work that I've done (which I've added to my To Do file), and I think it's holding up reasonably well considering my stress levels on other projects.

Next on my plate is to do some loose iteration on the level layout and some rough concept art for the main character. I am really looking forward to it!

And on that note -- relating to the main character: I had the epiphany that, of course, their name is Obsidian. The smoking mirror, a glass darkly, a crystal gem. Obsidian has been a motive since conception, feed into Midjourney as a prompt to generate my AI moodboard, and central to the mystic, mythological themes that I am working with (Tezcatlipoca, the smoking mirror). And I love the parallel to the worldbuilding in Steven Universe, one of my central inspirations. Obsidian in my game could almost be a fan-fiction original character in Rebecca Sugar's universe at this point, and I love that.

Writing that independent study proposal gave me the oportinity to think more deeply about my narrative/fabulation design, and refine my creative goals from a story perspective. I'll upload the pdf to my process folder for reference.

### April 1, 2023 - Character concept work
    
Riding on the creative momentum of having found the name of my main character (Hidden in plain sight), I went ahead and put down my ideas for his or her design in concept sketch format (images incoming):

![Obsidian01](https://github.com/lmorv/proto-glod/blob/main/Ideation/concept-art/Obsidian__sketches1.png)
![Obsidian02](https://github.com/lmorv/proto-glod/blob/main/Ideation/concept-art/Obsidian__sketches2.png)

This type of work comes pretty easy to me by now. I Am really enjoying exploring the possibilities and multiple interpretations of Obsidian's identity. Makes me want to implement a character select feature in the future and just make a bunch of characters. Or make a customizable character that the player can morph throughout the game.

On the level design front I've been kindda stumped. I feel like maybe the open-endedness of gey-boxing in the engine is maybe to daunting. And I keep fantasizing about making some loose sketches. Maybe I'll try to do that instead before doing a gray-boxing pass. More on that later.

### April 6, 2023 - Going full Level Design mode
    
Level design is such a huge field! I've been struggling with my approach to be honest. Grey-boxing without a concise plan is kindda daunting. I find myself spending most of the time just thinking about what I want to do, flying around the scene, and the possibilities are endless. Also making adjustments to the space in 3D takes a sort of action strategizing that I am not used to thinking of as fluently as in 2D drawing. I bet that if spent more time grey boxing without much pressure to pe perfect I'd get better at thinking of it as a polymorphic process, but right now it feels a bit clunky. I am also thinking that perhaps the built in modeling tools in Unreal might help me open up that flow that I'm missing from the process.

In the mean time I am experimenting with mixing and matching my design process between using 2D concept art in Photoshop in addition to my grey-boxing. Overall I feel like the underling task is to get clarity within myself on what it is that I am looking for in the design of the environment. And both approaches are being useful to try to work it out; their clunkyness helps me break down the essence of what I want. The types of spaces and elements of functional design that I am vaguely thinking about, that are present in my reference and in my internal library of uncategorized and unexamined knowledge. 

The 3D and 2D approaches are clunky in different ways. It's not like perspective drawing is easy. In a lot of ways it's harder that manipulating ready-made, fully rendered 3D solids using the transform gizmo. But it's maybe the fact that a sketch is supposed to look sketchy and undefined VS the possibility of very high levels of precision and perfect fidelity that makes it a much more fluid and freeing tool for me. And there's also the fact that level design exercises the same skills that I would need for architectural and interior design that amps up the difficulty for me, as opposed to character design.

### May 12, 2023 -  Coming back from a break

I am a turtle that never learnt to fly. I am also coming back from a short break in this project. That's not entirely true since I constantly think about it. A lot has happened in my mind that has gone undocumented, so here I will attempt to put myself up to speed on what those things are exactly. Maybe in a series of journals even.

In terms of schedule I am on Week 4 of my Spring Sprint; "Targeting system technical investigation
- Ray-casting, object detection". I found some really great references on how to do this and I thoroughly documented the process; taking screenshots of the Blueprint graphs in the tutorial, adding comments and instructions and implementing them in my game. I used a note taking app called Obsidian that I really like as a text editing tool, and I think I might create a whole 'Obsdian Vault' for the project and track my tech investigations in this way from now on. It is a very time consuming process tho,  but maybe not a significantly more time consuming than following a video tutorial on it's own. 

I take screenshots as I watch tutorials, trying to catch significant actions in the process, then crop the images to highlight those actions in the UI, then drop them into a text document, then follow the steps in my Unreal project as I write instructions and comments in the document.

One cool thing about Obsidian is that it uses MarkDown to format the text documents, so I could upload a Vault to a github repo and have all the documentation files show up on the browser looking really spiffy and nicely laid out. Obsidian also has a feature to link documents to each other with tags, and can be visualized in a graph view that looks really cool.

### May 16, 2023 - Building a knowledge base

I am building a knowledge base as a means to materialize my technical investigations, using Obsidian (the note taking software, not my character). I feel like I am diving into a whole other worm hole, like in all things. I am finding so many interesting materials online, not always connected to my goals directly, and I could go on studying in this way for ever. I figure I'm gonna keep going until something happens in my mind; I get distracted or fed up. I will keep in mind that I still want to get to executing some design goals within a reasonable time frame, and that there are specific threads of inquiry that I want to follow up on (NPCs, and dialogue systems). 

I have also been having a lot of fun narrowing down the design of my main character; obsidian --sketching them over and over on the Ipad-- and I am really exited to started in the 3d model in the near future. That and the narrative design are becoming my priorities in my mind just because they seem the most fun to me. Level design is a close second, specially since I've been finding a ton of cool modeling and texturing techniques during my tech investigations. So might use that to distract myself from time to time.

I've been thinking that maybe a good approach to fleshing out my story, and to get around the the technical dependencies of development in UE, might be to try to tell the story in a GB Studio game for the Game Boy. It would be a purely narrative, linear game; limited to the platform's mechanics. And that might give me a chance to see how the story plays out in that format.

### May 22, 2023 -  Wrirting writing writing

Wrote a dialogue stream for the beginng of the game in a sort-of script format. I am really liking this idea of jamming ecery character's dialogue into one stream-of-thought-type text and displaying it all in the same text box. I see it as a way of getting at the theme of polymorphism between things that I am playing around in the mechanics --As in the diferentiation between all the charaters is blured, and there is a chance that everything is happening inside obsidian's imagination. I thing the tone is fitting for a chaos-magic game.

I am having truble however imagining how to progress the narrative past this into 'sequence', and also picturing how i'll manage more than two characters talking in a conversation. I've been using **bold** text to signify Tezcatlipoca's dialogue, and normal text for obsidian. Maybe I'll use different text styles and sizes for other characters, even different fonts once in game. 

I am gonna try to write some more and get to the event-meat of the story, and then protype in GB Studio for a bit. I want to get into some object swapping intection experimentation as well, in UE5. And I thought of a title for the GB Studio story prototype:  Proto-Glod: Darklit (Lite).

### June 7, 2023 -  Auto writing, complexity of context

The harrowing thruth that all us humans live in fear the plain anthology of season subsumed by fire and a darly lit sky, saucetastic managment guys, my impending pedanticness escapes no reason no forray into the woodsack, the sack of wood, sac o' wooden beams. The antipathic pice of writing before your very eyes (reprise).

I think I'm gonna try out an automatic writig technique on my script, see what comes out. Hopefully it doesnt reveal something too deep about my subconcius; some fatal charcter flaw. I think it's fitting, and I am stuck otherwise, I am really dreading any methodical aproach. I have a sort of outline in my mind but I feel like as soon as I put it down on paper its going to feel done to me. And the work that follows is going to be a drag. I rather try to surprise myself.

I had a talk/ creative aproach/ story review session with Alexi (Alexandre Franchi) last week after the GaR meeting. I had him read my script and the narrative concept overview from my README.md file. We talked a whole buch, he said a lot of things, I'll tanscribe my notes below. What I am mostly taking out of it is that there is so much that I could do to approach the conceptualization of the story from a cinematic and experiential standpoint. I could storyboard, film prototype footage of key monets, make a 'mood-edit' with existig pieces of footage from other games, write out a formulaic 'pixar type' story outline, make an experiance map laying out the moment-to-moment event progression and user interactions of the piece (that was easy to do in Dead Space Remake, I speculate, because there was a built experiance to map in the first place). I could do so many things. 

I am mostly greatfull for the oportunity to talk to another human being about my convoluted process and know their intersts, and methods, and hear oabout their projects, and convoluted processes. The scale of some productions and art forms is hard to imagine sometimes, how many people and disciplines have to be movilized behind a unified idea, and how much work and care needs to go into every minute aspect of the final product. This shit is complex, I am not sure if knowing that helps.

On another complexity-related note; I feel like the complexity of my life is increasing latey. I hope I dont burn out. Switching contexts bwteen classes, and work stuff, and this (which is also work stuff, but I am trying not to care as much despite that) is HARD, hard on my brain. I mignt have reached a dangerous level of existing stuff in my life. I am also moving at the end of the month, and creating a whole separate art project with friends. Yaaay!

These are my notes from the session with Alexi: 

> Expossition > A process of discovery of who is the entity that is talking to Obsidian.
> 	- Why is the kid in the library?
> 	- What if we didn't know it was tezcatlipoca?
> - Tezcatlipoca prompts player to try game mechanics. Tutorializing. (I'm doing this alredy in a subtle way).
> - Using the gemboid as a coinduit.
> - Feeling of activating somethig beyond your control.
> - Starting with the possibility of picking up the book insted of diving straight into dialogue.
> - Why does the story begin now inetad of last weekend?
> - Letting go of the world as you knew it (mom, school, sibling). Point of no return.
> 	- Option to leave the library. At some point that option becomes unavailable.
> - Is there some sort of cosmic event bringing all these phomena into this library nexus?
> - Is there an exibition at the lybrary? Artifacts, books.
> 	- Reserch project? Lunar/solar eclipse?
> - Variety of cultural artifacts.
> 	- Only one (tezcatlipoca's mask), sets game event's in motion?
> - Tezcatlipoca is also the god of memory.
> - Maybe tezca is not aware he is tezca.
> - What if the library is a museum? (nope).
> - Quest system.
> - What if the kid becomes tezcatlipoca? (He doesn't need to, he is alredy an aspect of them).
> - Pixar story formula.
> - Story beats in cue cards.
> - Fleabag > Clusters of situational events, characters, bits of dialogue.
> - 3rd person VS first person - is first person more adapted to stream of conciusness type narrative? (not nescesarrily).
> - Playing around with the format of the game. Playing with conventions - 'Baba is You'.
> - The game could transition from 3rd to 1st person.
> - Automatic VS enacted/ intentional change.
> - Storyboard story beats - experiance mapping.
> 	- Cinematics: Types of shots, composition, lighting.
> - Color key progression.
> - Fake posters, promotional material.
> - Mood trailer/ edit. - Gameplay footage of other games - in-game footage / cinematics.
> - Fragmeted story - pieceing it together.
> - Puzzle experiance in narrative.



