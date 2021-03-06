#ifndef _AV_TRANSCODER_CODEC_AUDIO_CODEC_HPP_
#define _AV_TRANSCODER_CODEC_AUDIO_CODEC_HPP_

#include "ICodec.hpp"
#include <AvTranscoder/frame/AudioFrame.hpp>

namespace avtranscoder
{

class AvExport AudioCodec : public ICodec
{
public:
	AudioCodec( const ECodecType type, const std::string& codecName = "" );
	AudioCodec( const ECodecType type, const AVCodecID codecId );
	AudioCodec( const ICodec& codec );

	AudioFrameDesc getFrameDesc() const;
	const size_t getSampleRate() const;
	const size_t getChannels() const;
	const AVSampleFormat getAVSampleFormat() const;
	
	void setAudioParameters( const AudioFrameDesc& audioFrameDesc );
	void setAudioParameters( const size_t sampleRate, const size_t channels, const AVSampleFormat sampleFormat );
};

}

#endif