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
	 * Function CountdownUI.CountdownUI_C.SetYPosition
	 */
	struct UCountdownUI_C_SetYPosition_Params
	{
	public:
		float                                                      Y;                                                       // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CountdownUI.CountdownUI_C.CheckCountCancel
	 */
	struct UCountdownUI_C_CheckCountCancel_Params
	{
	public:
		bool                                                       NotCancel;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_WV9W[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function CountdownUI.CountdownUI_C.SetBlockInputForCountdownUI
	 */
	struct UCountdownUI_C_SetBlockInputForCountdownUI_Params
	{
	public:
		bool                                                       InBlockInput;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CountdownUI.CountdownUI_C.UpdateInteractionGauge
	 */
	struct UCountdownUI_C_UpdateInteractionGauge_Params
	{	};

	/**
	 * Function CountdownUI.CountdownUI_C.IsChatModeActive
	 */
	struct UCountdownUI_C_IsChatModeActive_Params
	{
	public:
		bool                                                       IsActive;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CountdownUI.CountdownUI_C.SetMessageTextId
	 */
	struct UCountdownUI_C_SetMessageTextId_Params
	{
	public:
		int32_t                                                    InTextId;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsCountdown;                                             // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_WZHT[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function CountdownUI.CountdownUI_C.SetCountdownTime
	 */
	struct UCountdownUI_C_SetCountdownTime_Params
	{
	public:
		int32_t                                                    InTime;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CountdownUI.CountdownUI_C.SetCountdownTimeValueText
	 */
	struct UCountdownUI_C_SetCountdownTimeValueText_Params
	{
	public:
		int32_t                                                    InValue;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CountdownUI.CountdownUI_C.SetMessageText
	 */
	struct UCountdownUI_C_SetMessageText_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       IsCountdown;                                             // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CountdownUI.CountdownUI_C.Construct
	 */
	struct UCountdownUI_C_Construct_Params
	{	};

	/**
	 * Function CountdownUI.CountdownUI_C.Tick
	 */
	struct UCountdownUI_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CountdownUI.CountdownUI_C.BeginInteractionWait
	 */
	struct UCountdownUI_C_BeginInteractionWait_Params
	{	};

	/**
	 * Function CountdownUI.CountdownUI_C.StartCountdown
	 */
	struct UCountdownUI_C_StartCountdown_Params
	{
	public:
		class FText                                                InMessage;                                               // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		int32_t                                                    InCountdownTime;                                         // 0x0018(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CountdownUI.CountdownUI_C.Hide
	 */
	struct UCountdownUI_C_Hide_Params
	{
	public:
		ECountdownResult                                           Result;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CountdownUI.CountdownUI_C.StartCountdown_ECountdownType
	 */
	struct UCountdownUI_C_StartCountdown_ECountdownType_Params
	{
	public:
		ECountdownType                                             InCountdownType;                                         // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_4P0W[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    InCountdownTime;                                         // 0x0004(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CountdownUI.CountdownUI_C.OnPressInteraction
	 */
	struct UCountdownUI_C_OnPressInteraction_Params
	{	};

	/**
	 * Function CountdownUI.CountdownUI_C.OnReleaseInteraction
	 */
	struct UCountdownUI_C_OnReleaseInteraction_Params
	{	};

	/**
	 * Function CountdownUI.CountdownUI_C.StartNoCountdown
	 */
	struct UCountdownUI_C_StartNoCountdown_Params
	{
	public:
		class FText                                                InMessage;                                               // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function CountdownUI.CountdownUI_C.StartNoCountdown_ECountdownType
	 */
	struct UCountdownUI_C_StartNoCountdown_ECountdownType_Params
	{
	public:
		ECountdownType                                             InCountdownType;                                         // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CountdownUI.CountdownUI_C.OnCountdownCancelDelegate_イベント
	 */
	struct UCountdownUI_C_OnCountdownCancelDelegate__Params
	{	};

	/**
	 * Function CountdownUI.CountdownUI_C.OnCountdownInteractionDelegate_イベント
	 */
	struct UCountdownUI_C_OnCountdownInteractionDelegate__Params
	{
	public:
		bool                                                       bPress;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CountdownUI.CountdownUI_C.OnAnimationFinished
	 */
	struct UCountdownUI_C_OnAnimationFinished_Params
	{
	public:
		class UWidgetAnimation*                                    Animation;                                               // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CountdownUI.CountdownUI_C.Destruct
	 */
	struct UCountdownUI_C_Destruct_Params
	{	};

	/**
	 * Function CountdownUI.CountdownUI_C.StartNoCountdown_BattleAreaMessage
	 */
	struct UCountdownUI_C_StartNoCountdown_BattleAreaMessage_Params
	{	};

	/**
	 * Function CountdownUI.CountdownUI_C.UnbindCountdownCancelDelegate
	 */
	struct UCountdownUI_C_UnbindCountdownCancelDelegate_Params
	{	};

	/**
	 * Function CountdownUI.CountdownUI_C.UIVisibleSettingChangeDelegate_Event
	 */
	struct UCountdownUI_C_UIVisibleSettingChangeDelegate_Event_Params
	{
	public:
		ESBUIType                                                  InUIType;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bInVisibility;                                           // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bInInstantly;                                            // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CountdownUI.CountdownUI_C.ExecuteUbergraph_CountdownUI
	 */
	struct UCountdownUI_C_ExecuteUbergraph_CountdownUI_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CountdownUI.CountdownUI_C.OnCountdownCancel__DelegateSignature
	 */
	struct UCountdownUI_C_OnCountdownCancel__DelegateSignature_Params
	{	};

	/**
	 * Function CountdownUI.CountdownUI_C.OnCountdownEnd__DelegateSignature
	 */
	struct UCountdownUI_C_OnCountdownEnd__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
