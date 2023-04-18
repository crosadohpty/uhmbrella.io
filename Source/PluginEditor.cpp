/*
  ==============================================================================

    This file contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#include "PluginProcessor.h"
#include "PluginEditor.h"

//==============================================================================
UhmpluginAudioProcessorEditor::UhmpluginAudioProcessorEditor (UhmpluginAudioProcessor& p)
    : AudioProcessorEditor (&p), audioProcessor (p)
{
    // Make sure that before the constructor has finished, you've set the
    // editor's size to whatever you need it to be.
    addAndMakeVisible(mainmenu);
    addAndMakeVisible(stampmenu);
    stampmenu.setVisible(false);

    setSize (400, 300);
    
}

UhmpluginAudioProcessorEditor::~UhmpluginAudioProcessorEditor()
{
}

//==============================================================================
void UhmpluginAudioProcessorEditor::paint (juce::Graphics& g)
{
    // (Our component is opaque, so we must completely fill the background with a solid colour)
    g.fillAll (getLookAndFeel().findColour (juce::ResizableWindow::backgroundColourId));
    g.setColour (juce::Colours::black);
    //Sorry I had to put this here, maybe you can figure out how to make it better, it's just ment to update
    //the main plugin window constantly
    if (mainmenu.showstampmenu) {
        setSize(800, 400);
        resized();
    }
}

void UhmpluginAudioProcessorEditor::resized()
{
    // This is generally where you'll want to lay out the positions of any
    // subcomponents in your editor..
    stampmenu.repaint();
    if (stampmenu.goback) {
        stampmenu.goback = false;
        mainmenu.showstampmenu = false;
        setSize(400, 300);
    }
    if (mainmenu.showstampmenu) {
        stampmenu.setVisible(true);
        mainmenu.setVisible(false);
        stampmenu.repaint();
        stampmenu.resized();
    }
    else {
        stampmenu.setVisible(false);
        mainmenu.setVisible(true);
        mainmenu.resized();
    }

    //gotta make some more efficient code that can change visibility of all components with respect
    //to something else. Meanwhile I will use If's cause easier to think about.
}
