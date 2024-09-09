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
	 * Function DamageUI.DamageUI_C.SetBorderAlignment
	 */
	struct UDamageUI_C_SetBorderAlignment_Params
	{	};

	/**
	 * Function DamageUI.DamageUI_C.PlayAnim
	 */
	struct UDamageUI_C_PlayAnim_Params
	{	};

	/**
	 * Function DamageUI.DamageUI_C.SetDamageCorrectionIcon
	 */
	struct UDamageUI_C_SetDamageCorrectionIcon_Params
	{	};

	/**
	 * Function DamageUI.DamageUI_C.SetNumber
	 */
	struct UDamageUI_C_SetNumber_Params
	{	};

	/**
	 * Function DamageUI.DamageUI_C.SetMiss
	 */
	struct UDamageUI_C_SetMiss_Params
	{	};

	/**
	 * Function DamageUI.DamageUI_C.UIVisibleSettingChangeDelegate_Event_1
	 */
	struct UDamageUI_C_UIVisibleSettingChangeDelegate_Event_1_Params
	{
	public:
		ESBUIType                                                  InUIType;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bInVisibility;                                           // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bInInstantly;                                            // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DamageUI.DamageUI_C.BindUIVisibleSettingDelegate
	 */
	struct UDamageUI_C_BindUIVisibleSettingDelegate_Params
	{	};

	/**
	 * Function DamageUI.DamageUI_C.UnbindUIVisibleSettingDelegate
	 */
	struct UDamageUI_C_UnbindUIVisibleSettingDelegate_Params
	{	};

	/**
	 * Function DamageUI.DamageUI_C.Construct
	 */
	struct UDamageUI_C_Construct_Params
	{	};

	/**
	 * Function DamageUI.DamageUI_C.OnAnimationFinished
	 */
	struct UDamageUI_C_OnAnimationFinished_Params
	{
	public:
		class UWidgetAnimation*                                    Animation;                                               // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DamageUI.DamageUI_C.Destruct
	 */
	struct UDamageUI_C_Destruct_Params
	{	};

	/**
	 * Function DamageUI.DamageUI_C.ExecuteUbergraph_DamageUI
	 */
	struct UDamageUI_C_ExecuteUbergraph_DamageUI_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
