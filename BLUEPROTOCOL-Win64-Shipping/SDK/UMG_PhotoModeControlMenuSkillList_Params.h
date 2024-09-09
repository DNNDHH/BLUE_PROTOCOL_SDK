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
	 * Function UMG_PhotoModeControlMenuSkillList.UMG_PhotoModeControlMenuSkillList_C.UpdateSkillList
	 */
	struct UUMG_PhotoModeControlMenuSkillList_C_UpdateSkillList_Params
	{	};

	/**
	 * Function UMG_PhotoModeControlMenuSkillList.UMG_PhotoModeControlMenuSkillList_C.Construct
	 */
	struct UUMG_PhotoModeControlMenuSkillList_C_Construct_Params
	{	};

	/**
	 * Function UMG_PhotoModeControlMenuSkillList.UMG_PhotoModeControlMenuSkillList_C.OnItemButtonPressed
	 */
	struct UUMG_PhotoModeControlMenuSkillList_C_OnItemButtonPressed_Params
	{
	public:
		class UCharaCreateClassSkillMenuItem_C*                    Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_PhotoModeControlMenuSkillList.UMG_PhotoModeControlMenuSkillList_C.OnItemButtonReleased
	 */
	struct UUMG_PhotoModeControlMenuSkillList_C_OnItemButtonReleased_Params
	{
	public:
		class UCharaCreateClassSkillMenuItem_C*                    Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_PhotoModeControlMenuSkillList.UMG_PhotoModeControlMenuSkillList_C.ExecuteUbergraph_UMG_PhotoModeControlMenuSkillList
	 */
	struct UUMG_PhotoModeControlMenuSkillList_C_ExecuteUbergraph_UMG_PhotoModeControlMenuSkillList_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_MY9R[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UMG_PhotoModeControlMenuSkillList.UMG_PhotoModeControlMenuSkillList_C.OnReleased__DelegateSignature
	 */
	struct UUMG_PhotoModeControlMenuSkillList_C_OnReleased__DelegateSignature_Params
	{
	public:
		class UCharaCreateClassSkillMenuItem_C*                    Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_PhotoModeControlMenuSkillList.UMG_PhotoModeControlMenuSkillList_C.OnPressed__DelegateSignature
	 */
	struct UUMG_PhotoModeControlMenuSkillList_C_OnPressed__DelegateSignature_Params
	{
	public:
		class UCharaCreateClassSkillMenuItem_C*                    Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
