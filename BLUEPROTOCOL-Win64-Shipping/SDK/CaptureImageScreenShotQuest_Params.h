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
	 * Function CaptureImageScreenShotQuest.CaptureImageScreenShotQuest_C.SetCaptureImage
	 */
	struct UCaptureImageScreenShotQuest_C_SetCaptureImage_Params
	{
	public:
		class UTexture2D*                                          CaptureImage;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CaptureImageScreenShotQuest.CaptureImageScreenShotQuest_C.Construct
	 */
	struct UCaptureImageScreenShotQuest_C_Construct_Params
	{	};

	/**
	 * Function CaptureImageScreenShotQuest.CaptureImageScreenShotQuest_C.ExecuteUbergraph_CaptureImageScreenShotQuest
	 */
	struct UCaptureImageScreenShotQuest_C_ExecuteUbergraph_CaptureImageScreenShotQuest_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_4CIF[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
