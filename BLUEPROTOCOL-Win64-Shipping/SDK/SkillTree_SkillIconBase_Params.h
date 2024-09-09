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
	 * Function SkillTree_SkillIconBase.SkillTree_SkillIconBase_C.SetEquipmentIconVisible
	 */
	struct USkillTree_SkillIconBase_C_SetEquipmentIconVisible_Params
	{
	public:
		bool                                                       Visible;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SkillTree_SkillIconBase.SkillTree_SkillIconBase_C.UpdateSimple
	 */
	struct USkillTree_SkillIconBase_C_UpdateSimple_Params
	{	};

	/**
	 * Function SkillTree_SkillIconBase.SkillTree_SkillIconBase_C.Update
	 */
	struct USkillTree_SkillIconBase_C_Update_Params
	{	};

	/**
	 * Function SkillTree_SkillIconBase.SkillTree_SkillIconBase_C.Init
	 */
	struct USkillTree_SkillIconBase_C_Init_Params
	{
	public:
		bool                                                       IsPassive;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_R9HJ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    SkillId;                                                 // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    SkillLevel;                                              // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_9FSP[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SkillTree_SkillIconBase.SkillTree_SkillIconBase_C.Destruct
	 */
	struct USkillTree_SkillIconBase_C_Destruct_Params
	{	};

	/**
	 * Function SkillTree_SkillIconBase.SkillTree_SkillIconBase_C.ExecuteUbergraph_SkillTree_SkillIconBase
	 */
	struct USkillTree_SkillIconBase_C_ExecuteUbergraph_SkillTree_SkillIconBase_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SkillTree_SkillIconBase.SkillTree_SkillIconBase_C.OnUnhovered__DelegateSignature
	 */
	struct USkillTree_SkillIconBase_C_OnUnhovered__DelegateSignature_Params
	{
	public:
		int32_t                                                    SkillId;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SkillTree_SkillIconBase.SkillTree_SkillIconBase_C.OnHovered__DelegateSignature
	 */
	struct USkillTree_SkillIconBase_C_OnHovered__DelegateSignature_Params
	{
	public:
		int32_t                                                    SkillId;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SkillTree_SkillIconBase.SkillTree_SkillIconBase_C.OnClicked__DelegateSignature
	 */
	struct USkillTree_SkillIconBase_C_OnClicked__DelegateSignature_Params
	{
	public:
		int32_t                                                    SkillId;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
