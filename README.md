
# Testapp!

! I'm still working on getting the readme into a useful state. I apologize for the inconvenience. It's also Mac-centric so sorry if there is stuff in here that just doesn't make sense. I don't know any other way :) 

This repo is part of a proof of concept demo of a design-to-code workflow that starts with a Figma file and ends with consumeable SCSS variables. 

<a href="https://mfcumarc.github.io/testapp/">Click to see live site hosted on GitHub pages</a>

***

## Tools

* I used a free [version of Figma](https://www.figma.com/downloads/) to create type and color styles for my design. 
* I used the free version of [Token Studio for Figma](https://tokens.studio/) to convert the styles to tokens. 
* This project is HTML & SCSS/CSS and uses [Gulp](https://gulpjs.com/) as a build tool.
* I used Style Dictionary To convert the JSON to SCSS variables. Style Dictionary can also convert the JSON to iOS and Android files and other formats but that was out of scope for this demo :)

***

## Learnings

To get styles and tokens to sync automatically in Figma, you have to use the paid version of Token Studio. I wound up re-writing the JSON and feeding it to Token Studio instead - which is backwards - but it was a necessary workaround due to the free version of the plugin. It also allowed me to structure the hierachy the way I wanted because the free plugin doesn't support alias tokens.

There is some ambiguity around the "correct" formatting for a tokens.json file. [The W3C standard](https://www.w3.org/community/design-tokens/) syntax does not work in Style Dictionary because of the "$" namespace. I'm sure there's a parser out there that will translate it, but I feel like the spec is still so new that to follow it strictly all the time could be a tail-chaser. At least until it's less volitile.

***

## Use
Once you get everything set up, you can make a change to a value in "testapp-tokens-figma.jason", hit save, and run "style-dictionary build". When you run "style-dictionary build" it will parse the "testapp-tokens-figma.json" and build a "_variables.scss" file, and that will immediately be processed by gulp which will then reload the webpage and show your change! It's super fun! 

### Gulp
Clone the repo and [install gulp](https://gulpjs.com/docs/en/getting-started/quick-start/). Open Terminal, cd to the project root directory, and type "gulp" to start up a local server and build the project. The gulpfile config file is set to compile sass and watch the "app/styles" sass files for changes. 

### Style Dictionary
[Install Style Dictionary](https://amzn.github.io/style-dictionary/#/quick_start). 




