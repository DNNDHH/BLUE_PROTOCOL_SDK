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
	 * Function Effect_Ability.Effect_Ability_C.SetLineVisible
	 */
	struct UEffect_Ability_C_SetLineVisible_Params
	{
	public:
		bool                                                       Visible;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Effect_Ability.Effect_Ability_C.SetSpecialMainNum
	 */
	struct UEffect_Ability_C_SetSpecialMainNum_Params
	{
	public:
		bool                                                       Visible;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_8FXY[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    Num;                                                     // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Effect_Ability.Effect_Ability_C.Get_Txt_EffectName_ToolTipWidget_1
	 */
	struct UEffect_Ability_C_Get_Txt_EffectName_ToolTipWidget_1_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Effect_Ability.Effect_Ability_C.SetToolTipEType
	 */
	struct UEffect_Ability_C_SetToolTipEType_Params
	{
	public:
		class FText                                                InName;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                InDesc;                                                  // 0x0018(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Effect_Ability.Effect_Ability_C.SetToolTipDType
	 */
	struct UEffect_Ability_C_SetToolTipDType_Params
	{
	public:
		class FText                                                InName;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                InDesc1;                                                 // 0x0018(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       Desc2Active;                                             // 0x0030(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_1DY4[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                InDesc2;                                                 // 0x0038(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Effect_Ability.Effect_Ability_C.SetToolTipCType
	 */
	struct UEffect_Ability_C_SetToolTipCType_Params
	{
	public:
		class FText                                                InName;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                Type;                                                    // 0x0018(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                InDesc;                                                  // 0x0030(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Effect_Ability.Effect_Ability_C.SetToolTipBType
	 */
	struct UEffect_Ability_C_SetToolTipBType_Params
	{
	public:
		class FText                                                InName;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                InDesc;                                                  // 0x0018(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Effect_Ability.Effect_Ability_C.Construct
	 */
	struct UEffect_Ability_C_Construct_Params
	{	};

	/**
	 * Function Effect_Ability.Effect_Ability_C.ExecuteUbergraph_Effect_Ability
	 */
	struct UEffect_Ability_C_ExecuteUbergraph_Effect_Ability_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
