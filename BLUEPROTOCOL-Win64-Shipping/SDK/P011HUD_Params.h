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
	 * Function P011HUD.P011HUD_C.SetInspirationIconRenderOpacity
	 */
	struct UP011HUD_C_SetInspirationIconRenderOpacity_Params
	{
	public:
		bool                                                       TrueIsVisible;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function P011HUD.P011HUD_C.PlayAnimReverseInOut
	 */
	struct UP011HUD_C_PlayAnimReverseInOut_Params
	{	};

	/**
	 * Function P011HUD.P011HUD_C.PlayAnimForwardInOut
	 */
	struct UP011HUD_C_PlayAnimForwardInOut_Params
	{	};

	/**
	 * Function P011HUD.P011HUD_C.OnSetEditMode
	 */
	struct UP011HUD_C_OnSetEditMode_Params
	{
	public:
		bool                                                       InIsEdit;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function P011HUD.P011HUD_C.OnTerminate
	 */
	struct UP011HUD_C_OnTerminate_Params
	{	};

	/**
	 * Function P011HUD.P011HUD_C.OnInitialize
	 */
	struct UP011HUD_C_OnInitialize_Params
	{	};

	/**
	 * Function P011HUD.P011HUD_C.OnUnbind
	 */
	struct UP011HUD_C_OnUnbind_Params
	{	};

	/**
	 * Function P011HUD.P011HUD_C.OnBind
	 */
	struct UP011HUD_C_OnBind_Params
	{	};

	/**
	 * Function P011HUD.P011HUD_C.OnSetMpValue
	 */
	struct UP011HUD_C_OnSetMpValue_Params
	{
	public:
		float                                                      InValue;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function P011HUD.P011HUD_C.OnSetGaugeValue
	 */
	struct UP011HUD_C_OnSetGaugeValue_Params
	{
	public:
		float                                                      InValue;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function P011HUD.P011HUD_C.BindVisibleSetting
	 */
	struct UP011HUD_C_BindVisibleSetting_Params
	{	};

	/**
	 * Function P011HUD.P011HUD_C.OnUIVisibleSettingChange
	 */
	struct UP011HUD_C_OnUIVisibleSettingChange_Params
	{
	public:
		ESBUIType                                                  InUIType;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bInVisibility;                                           // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bInInstantly;                                            // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function P011HUD.P011HUD_C.UnbindVisibleSetting
	 */
	struct UP011HUD_C_UnbindVisibleSetting_Params
	{	};

	/**
	 * Function P011HUD.P011HUD_C.ExecuteUbergraph_P011HUD
	 */
	struct UP011HUD_C_ExecuteUbergraph_P011HUD_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
