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
	 * Function CaptureImageChatUnread.CaptureImageChatUnread_C.SetCaptureImage
	 */
	struct UCaptureImageChatUnread_C_SetCaptureImage_Params
	{
	public:
		class UTexture2DDynamic*                                   CaptureImage;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CaptureImageChatUnread.CaptureImageChatUnread_C.Construct
	 */
	struct UCaptureImageChatUnread_C_Construct_Params
	{	};

	/**
	 * Function CaptureImageChatUnread.CaptureImageChatUnread_C.ExecuteUbergraph_CaptureImageChatUnread
	 */
	struct UCaptureImageChatUnread_C_ExecuteUbergraph_CaptureImageChatUnread_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_F1I3[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
