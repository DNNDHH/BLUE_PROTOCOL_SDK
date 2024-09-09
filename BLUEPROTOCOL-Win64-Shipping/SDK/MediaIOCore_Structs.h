#pragma once

/**
 * Name: BLUEPROTOCOL-Win64-Shipping
 * Version: 1.6.0
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum MediaIOCore.EFileMediaOutputPixelFormat
	 */
	enum class EFileMediaOutputPixelFormat : uint8_t
	{
		B8G8R8A8  = 0,
		FloatRGBA = 1,
		MAX       = 2
	};

	/**
	 * Enum MediaIOCore.EMediaCaptureCroppingType
	 */
	enum class EMediaCaptureCroppingType : uint8_t
	{
		None    = 0,
		Center  = 1,
		TopLeft = 2,
		Custom  = 3,
		MAX     = 4
	};

	/**
	 * Enum MediaIOCore.EMediaCaptureState
	 */
	enum class EMediaCaptureState : uint8_t
	{
		Error         = 0,
		Capturing     = 1,
		Preparing     = 2,
		StopRequested = 3,
		Stopped       = 4,
		MAX           = 5
	};

	/**
	 * Enum MediaIOCore.EMediaIOReferenceType
	 */
	enum class EMediaIOReferenceType : uint8_t
	{
		FreeRun  = 0,
		External = 1,
		Input    = 2,
		MAX      = 3
	};

	/**
	 * Enum MediaIOCore.EMediaIOOutputType
	 */
	enum class EMediaIOOutputType : uint8_t
	{
		Fill       = 0,
		FillAndKey = 1,
		MAX        = 2
	};

	/**
	 * Enum MediaIOCore.EMediaIOInputType
	 */
	enum class EMediaIOInputType : uint8_t
	{
		Fill       = 0,
		FillAndKey = 1,
		MAX        = 2
	};

	/**
	 * Enum MediaIOCore.EMediaIOTimecodeFormat
	 */
	enum class EMediaIOTimecodeFormat : uint8_t
	{
		None = 0,
		LTC  = 1,
		VITC = 2,
		MAX  = 3
	};

	/**
	 * Enum MediaIOCore.EMediaIOStandardType
	 */
	enum class EMediaIOStandardType : uint8_t
	{
		Progressive               = 0,
		Interlaced                = 1,
		ProgressiveSegmentedFrame = 2,
		MAX                       = 3
	};

	/**
	 * Enum MediaIOCore.EMediaIOQuadLinkTransportType
	 */
	enum class EMediaIOQuadLinkTransportType : uint8_t
	{
		SquareDivision      = 0,
		TwoSampleInterleave = 1,
		MAX                 = 2
	};

	/**
	 * Enum MediaIOCore.EMediaIOTransportType
	 */
	enum class EMediaIOTransportType : uint8_t
	{
		SingleLink = 0,
		DualLink   = 1,
		QuadLink   = 2,
		HDMI       = 3,
		MAX        = 4
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct MediaIOCore.MediaCaptureOptions
	 * Size -> 0x0010
	 */
	struct FMediaCaptureOptions
	{
	public:
		EMediaCaptureCroppingType                                  Crop;                                                    // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FHHV[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FIntPoint                                           CustomCapturePoint;                                      // 0x0004(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bResizeSourceBuffer;                                     // 0x000C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSkipFrameWhenRunningExpensiveTasks;                     // 0x000D(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bConvertToDesiredPixelFormat;                            // 0x000E(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bForceAlphaToOneOnConversion;                            // 0x000F(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct MediaIOCore.MediaIODevice
	 * Size -> 0x000C
	 */
	struct FMediaIODevice
	{
	public:
		class FName                                                DeviceName;                                              // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    DeviceIdentifier;                                        // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct MediaIOCore.MediaIOConnection
	 * Size -> 0x0020
	 */
	struct FMediaIOConnection
	{
	public:
		struct FMediaIODevice                                      Device;                                                  // 0x0000(0x000C) Edit, NoDestructor, NativeAccessSpecifierPublic
		class FName                                                protocol;                                                // 0x000C(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EMediaIOTransportType                                      TransportType;                                           // 0x0014(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_72MF[0x3];                                   // 0x0015(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		EMediaIOQuadLinkTransportType                              QuadTransportType;                                       // 0x0018(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OYA8[0x3];                                   // 0x0019(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		int32_t                                                    PortIdentifier;                                          // 0x001C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct MediaIOCore.MediaIOMode
	 * Size -> 0x0018
	 */
	struct FMediaIOMode
	{
	public:
		struct FFrameRate                                          FrameRate;                                               // 0x0000(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FIntPoint                                           Resolution;                                              // 0x0008(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EMediaIOStandardType                                       Standard;                                                // 0x0010(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_J03M[0x3];                                   // 0x0011(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		int32_t                                                    DeviceModeIdentifier;                                    // 0x0014(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct MediaIOCore.MediaIOConfiguration
	 * Size -> 0x003C
	 */
	struct FMediaIOConfiguration
	{
	public:
		bool                                                       bIsInput;                                                // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9RXQ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMediaIOConnection                                  MediaConnection;                                         // 0x0004(0x0020) Edit, EditConst, NoDestructor, NativeAccessSpecifierPublic
		struct FMediaIOMode                                        MediaMode;                                               // 0x0024(0x0018) Edit, EditConst, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct MediaIOCore.MediaIOOutputConfiguration
	 * Size -> 0x004C
	 */
	struct FMediaIOOutputConfiguration
	{
	public:
		struct FMediaIOConfiguration                               MediaConfiguration;                                      // 0x0000(0x003C) Edit, EditConst, NoDestructor, NativeAccessSpecifierPublic
		EMediaIOOutputType                                         OutputType;                                              // 0x003C(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YDQV[0x3];                                   // 0x003D(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		int32_t                                                    KeyPortIdentifier;                                       // 0x0040(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EMediaIOReferenceType                                      OutputReference;                                         // 0x0044(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_N28E[0x3];                                   // 0x0045(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		int32_t                                                    ReferencePortIdentifier;                                 // 0x0048(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct MediaIOCore.MediaIOInputConfiguration
	 * Size -> 0x0044
	 */
	struct FMediaIOInputConfiguration
	{
	public:
		struct FMediaIOConfiguration                               MediaConfiguration;                                      // 0x0000(0x003C) Edit, EditConst, NoDestructor, NativeAccessSpecifierPublic
		EMediaIOInputType                                          InputType;                                               // 0x003C(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FMF7[0x3];                                   // 0x003D(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		int32_t                                                    KeyPortIdentifier;                                       // 0x0040(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
