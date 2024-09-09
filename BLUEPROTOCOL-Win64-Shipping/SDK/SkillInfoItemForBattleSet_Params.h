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
	 * Function SkillInfoItemForBattleSet.SkillInfoItemForBattleSet_C.GetSkillClassType
	 */
	struct USkillInfoItemForBattleSet_C_GetSkillClassType_Params
	{
	public:
		ESBClassType                                               OutSkillClassType;                                       // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SkillInfoItemForBattleSet.SkillInfoItemForBattleSet_C.GetSkillID
	 */
	struct USkillInfoItemForBattleSet_C_GetSkillID_Params
	{
	public:
		int32_t                                                    OutSkillId;                                              // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SkillInfoItemForBattleSet.SkillInfoItemForBattleSet_C.SetInfoItemSelected
	 */
	struct USkillInfoItemForBattleSet_C_SetInfoItemSelected_Params
	{
	public:
		bool                                                       InIsSelected;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_673C[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SkillInfoItemForBattleSet.SkillInfoItemForBattleSet_C.CreateTooltip
	 */
	struct USkillInfoItemForBattleSet_C_CreateTooltip_Params
	{
	public:
		bool                                                       InNotUseTooltip;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_IAID[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    InSkillId;                                               // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InSkillLevel;                                            // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SkillInfoItemForBattleSet.SkillInfoItemForBattleSet_C.SetSkillName
	 */
	struct USkillInfoItemForBattleSet_C_SetSkillName_Params
	{
	public:
		class FString                                              InSkillName;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		int32_t                                                    InSkillLevel;                                            // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_MQNV[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SkillInfoItemForBattleSet.SkillInfoItemForBattleSet_C.SetSkillIconEquippedMarkVisibility
	 */
	struct USkillInfoItemForBattleSet_C_SetSkillIconEquippedMarkVisibility_Params
	{
	public:
		bool                                                       InIsVisible;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SkillInfoItemForBattleSet.SkillInfoItemForBattleSet_C.SetSkill
	 */
	struct USkillInfoItemForBattleSet_C_SetSkill_Params
	{
	public:
		int32_t                                                    InSkillId;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESBClassType                                               InSkillClassType;                                        // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       InIsClassAbility;                                        // 0x0005(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SkillInfoItemForBattleSet.SkillInfoItemForBattleSet_C.PreConstruct
	 */
	struct USkillInfoItemForBattleSet_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SkillInfoItemForBattleSet.SkillInfoItemForBattleSet_C.BndEvt__BtnListItem_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct USkillInfoItemForBattleSet_C_BndEvt__BtnListItem_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SkillInfoItemForBattleSet.SkillInfoItemForBattleSet_C.BndEvt__SkillInfoItemForBattleSet_Btn_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 */
	struct USkillInfoItemForBattleSet_C_BndEvt__SkillInfoItemForBattleSet_Btn_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SkillInfoItemForBattleSet.SkillInfoItemForBattleSet_C.BndEvt__SkillInfoItemForBattleSet_Btn_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 */
	struct USkillInfoItemForBattleSet_C_BndEvt__SkillInfoItemForBattleSet_Btn_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SkillInfoItemForBattleSet.SkillInfoItemForBattleSet_C.ExecuteUbergraph_SkillInfoItemForBattleSet
	 */
	struct USkillInfoItemForBattleSet_C_ExecuteUbergraph_SkillInfoItemForBattleSet_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SkillInfoItemForBattleSet.SkillInfoItemForBattleSet_C.OnSkillInfoItemPressed__DelegateSignature
	 */
	struct USkillInfoItemForBattleSet_C_OnSkillInfoItemPressed__DelegateSignature_Params
	{
	public:
		class USkillInfoItemForBattleSet_C*                        InInfoItem;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
