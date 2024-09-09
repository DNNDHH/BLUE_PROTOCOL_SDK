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
	 * Function UMG_Notification_Match.UMG_Notification_Match_C.UpdateParticipantNumber
	 */
	struct UUMG_Notification_Match_C_UpdateParticipantNumber_Params
	{	};

	/**
	 * Function UMG_Notification_Match.UMG_Notification_Match_C.UpdateConfirmTime
	 */
	struct UUMG_Notification_Match_C_UpdateConfirmTime_Params
	{	};

	/**
	 * Function UMG_Notification_Match.UMG_Notification_Match_C.HideBright
	 */
	struct UUMG_Notification_Match_C_HideBright_Params
	{	};

	/**
	 * Function UMG_Notification_Match.UMG_Notification_Match_C.ShowBright
	 */
	struct UUMG_Notification_Match_C_ShowBright_Params
	{	};

	/**
	 * Function UMG_Notification_Match.UMG_Notification_Match_C.PlayAnimationForwardIfNotVisible
	 */
	struct UUMG_Notification_Match_C_PlayAnimationForwardIfNotVisible_Params
	{	};

	/**
	 * Function UMG_Notification_Match.UMG_Notification_Match_C.SetMatchingText
	 */
	struct UUMG_Notification_Match_C_SetMatchingText_Params
	{
	public:
		class UTextBlock*                                          OutText;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                BaseText;                                                // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function UMG_Notification_Match.UMG_Notification_Match_C.GetOperateMode
	 */
	struct UUMG_Notification_Match_C_GetOperateMode_Params
	{	};

	/**
	 * Function UMG_Notification_Match.UMG_Notification_Match_C.GetQuickAccessKeyText
	 */
	struct UUMG_Notification_Match_C_GetQuickAccessKeyText_Params
	{	};

	/**
	 * Function UMG_Notification_Match.UMG_Notification_Match_C.Get_Accepting_CountText_Text_1
	 */
	struct UUMG_Notification_Match_C_Get_Accepting_CountText_Text_1_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UMG_Notification_Match.UMG_Notification_Match_C.Get_Applying_MaxNumText_Text_1
	 */
	struct UUMG_Notification_Match_C_Get_Applying_MaxNumText_Text_1_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UMG_Notification_Match.UMG_Notification_Match_C.Get_Applying_CurNumText_Text_1
	 */
	struct UUMG_Notification_Match_C_Get_Applying_CurNumText_Text_1_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UMG_Notification_Match.UMG_Notification_Match_C.Init
	 */
	struct UUMG_Notification_Match_C_Init_Params
	{	};

	/**
	 * Function UMG_Notification_Match.UMG_Notification_Match_C.Tick
	 */
	struct UUMG_Notification_Match_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_Notification_Match.UMG_Notification_Match_C.Construct
	 */
	struct UUMG_Notification_Match_C_Construct_Params
	{	};

	/**
	 * Function UMG_Notification_Match.UMG_Notification_Match_C.OnUpdateKeyConfig
	 */
	struct UUMG_Notification_Match_C_OnUpdateKeyConfig_Params
	{	};

	/**
	 * Function UMG_Notification_Match.UMG_Notification_Match_C.ChangeKeyGuide
	 */
	struct UUMG_Notification_Match_C_ChangeKeyGuide_Params
	{	};

	/**
	 * Function UMG_Notification_Match.UMG_Notification_Match_C.Destruct
	 */
	struct UUMG_Notification_Match_C_Destruct_Params
	{	};

	/**
	 * Function UMG_Notification_Match.UMG_Notification_Match_C.ExecuteUbergraph_UMG_Notification_Match
	 */
	struct UUMG_Notification_Match_C_ExecuteUbergraph_UMG_Notification_Match_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
