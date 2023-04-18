/*
  ==============================================================================

    SampleItem.cpp
    Created: 17 Mar 2023 8:34:31pm
    Author:  Samuel A. Maldonado

  ==============================================================================
*/

#include <JuceHeader.h>
#include "SampleItem.h"

//==============================================================================
SampleItem::SampleItem(String sampleName, String instrument, String key, Image sampleCover, int BPM, File sampleFile)
{
    this->sampleName = sampleName;
    this->instrument = instrument;
    this->key = key;
    this->sampleCover = sampleCover;
    this->BPM = BPM;
    this->sampleFile = sampleFile;
    sampleBox.setBounds(0, 0, 444, 48);

}

SampleItem::~SampleItem()
{
}

void SampleItem::paint (juce::Graphics& g)
{
    g.fillAll(Colours::darkslateblue);
    //draw imaage later

    g.setColour(Colours::white);
    g.setFont(Font(15.0f));
    g.drawText(sampleName, sampleBox.removeFromTop(50), Justification::centredRight, true);
    
    g.setColour(Colours::lightslategrey);
    g.setFont(Font(12.0f));
    g.drawText("Instrument: " + instrument, sampleBox.removeFromTop(20), Justification::centredRight, true);
    g.drawText("Key: " + key, sampleBox.removeFromTop(20), Justification::centredRight, true);
    g.drawText("BPM: " + BPM, sampleBox.removeFromTop(20), Justification::centredRight, true);
}

void SampleItem::resized()
{
    // This method is where you should set the bounds of any child
    // components that your component contains..

}
