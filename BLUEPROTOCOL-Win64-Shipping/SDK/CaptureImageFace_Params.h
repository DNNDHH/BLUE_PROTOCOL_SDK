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
	 * Function CaptureImageFace.CaptureImageFace_C.SetCaptureImage
	 */
	struct UCaptureImageFace_C_SetCaptureImage_Params
	{
	public:
		class UTexture2DDynamic*                                   CaptureImage;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CaptureImageFace.CaptureImageFace_C.Construct
	 */
	struct UCaptureImageFace_C_Construct_Params
	{	};

	/**
	 * Function CaptureImageFace.CaptureImageFace_C.LoadFaceImage
	 */
	struct UCaptureImageFace_C_LoadFaceImage_Params
	{
	public:
		class FString                                              CharacterId;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function CaptureImageFace.CaptureImageFace_C.LoadPlayerFaceImage
	 */
	struct UCaptureImageFace_C_LoadPlayerFaceImage_Params
	{	};

	/**
	 * Function CaptureImageFace.CaptureImageFace_C.ExecuteUbergraph_CaptureImageFace
	 */
	struct UCaptureImageFace_C_ExecuteUbergraph_CaptureImageFace_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_CRGT[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
