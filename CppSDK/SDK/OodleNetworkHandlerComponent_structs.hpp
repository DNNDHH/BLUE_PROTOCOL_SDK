#pragma once

 

// Package: OodleNetworkHandlerComponent

#include "Basic.hpp"


namespace SDK
{

// Enum OodleNetworkHandlerComponent.EOodleEnableMode
// NumValues: 0x0003
enum class EOodleEnableMode : uint8
{
	AlwaysEnabled                            = 0,
	WhenCompressedPacketReceived             = 1,
	EOodleEnableMode_MAX                     = 2,
};

}

