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
	 * Function ChatLogFloatStampIcon.ChatLogFloatStampIcon_C.UpdateVisible
	 */
	struct UChatLogFloatStampIcon_C_UpdateVisible_Params
	{
	public:
		bool                                                       InVisible;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ChatLogFloatStampIcon.ChatLogFloatStampIcon_C.UpdatePos
	 */
	struct UChatLogFloatStampIcon_C_UpdatePos_Params
	{	};

	/**
	 * Function ChatLogFloatStampIcon.ChatLogFloatStampIcon_C.Finish
	 */
	struct UChatLogFloatStampIcon_C_Finish_Params
	{	};

	/**
	 * Function ChatLogFloatStampIcon.ChatLogFloatStampIcon_C.SetStamp
	 */
	struct UChatLogFloatStampIcon_C_SetStamp_Params
	{
	public:
		int32_t                                                    InStampId;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       InDeadIcon;                                              // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_WDSR[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ChatLogFloatStampIcon.ChatLogFloatStampIcon_C.Tick
	 */
	struct UChatLogFloatStampIcon_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ChatLogFloatStampIcon.ChatLogFloatStampIcon_C.OnAnimationFinished
	 */
	struct UChatLogFloatStampIcon_C_OnAnimationFinished_Params
	{
	public:
		class UWidgetAnimation*                                    Animation;                                               // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ChatLogFloatStampIcon.ChatLogFloatStampIcon_C.ExecuteUbergraph_ChatLogFloatStampIcon
	 */
	struct UChatLogFloatStampIcon_C_ExecuteUbergraph_ChatLogFloatStampIcon_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
