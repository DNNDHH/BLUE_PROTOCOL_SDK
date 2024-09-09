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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function CaptureImagePhotoMode.CaptureImagePhotoMode_C.SetCaptureImage
	 */
	struct UCaptureImagePhotoMode_C_SetCaptureImage_Params
	{
	public:
		class UTexture2DDynamic*                                   CaptureImage;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CaptureImagePhotoMode.CaptureImagePhotoMode_C.Construct
	 */
	struct UCaptureImagePhotoMode_C_Construct_Params
	{	};

	/**
	 * Function CaptureImagePhotoMode.CaptureImagePhotoMode_C.SetCaptureImageByCharacterId
	 */
	struct UCaptureImagePhotoMode_C_SetCaptureImageByCharacterId_Params
	{
	public:
		class FString                                              CharacterId;                                             // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function CaptureImagePhotoMode.CaptureImagePhotoMode_C.ExecuteUbergraph_CaptureImagePhotoMode
	 */
	struct UCaptureImagePhotoMode_C_ExecuteUbergraph_CaptureImagePhotoMode_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_7TMF[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
