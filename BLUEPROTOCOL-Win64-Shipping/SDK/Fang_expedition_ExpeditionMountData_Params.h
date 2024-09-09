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
	 * Function Fang_expedition_ExpeditionMountData.Fang_expedition_ExpeditionMountData_C.UpdateLotteryCountText
	 */
	struct UFang_expedition_ExpeditionMountData_C_UpdateLotteryCountText_Params
	{	};

	/**
	 * Function Fang_expedition_ExpeditionMountData.Fang_expedition_ExpeditionMountData_C.SetPlusCount
	 */
	struct UFang_expedition_ExpeditionMountData_C_SetPlusCount_Params
	{
	public:
		int32_t                                                    Count;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       UpdateSkip;                                              // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Fang_expedition_ExpeditionMountData.Fang_expedition_ExpeditionMountData_C.SetMaxIconNum
	 */
	struct UFang_expedition_ExpeditionMountData_C_SetMaxIconNum_Params
	{
	public:
		int32_t                                                    IconCount;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_5MBL[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Fang_expedition_ExpeditionMountData.Fang_expedition_ExpeditionMountData_C.SetUniqueIds
	 */
	struct UFang_expedition_ExpeditionMountData_C_SetUniqueIds_Params
	{
	public:
		TArray<class FString>                                      UniqueIds;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Fang_expedition_ExpeditionMountData.Fang_expedition_ExpeditionMountData_C.SetExpectedValue
	 */
	struct UFang_expedition_ExpeditionMountData_C_SetExpectedValue_Params
	{
	public:
		int32_t                                                    Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Fang_expedition_ExpeditionMountData.Fang_expedition_ExpeditionMountData_C.RemoveIndex
	 */
	struct UFang_expedition_ExpeditionMountData_C_RemoveIndex_Params
	{	};

	/**
	 * Function Fang_expedition_ExpeditionMountData.Fang_expedition_ExpeditionMountData_C.UnbindFunc
	 */
	struct UFang_expedition_ExpeditionMountData_C_UnbindFunc_Params
	{	};

	/**
	 * Function Fang_expedition_ExpeditionMountData.Fang_expedition_ExpeditionMountData_C.BindFunc
	 */
	struct UFang_expedition_ExpeditionMountData_C_BindFunc_Params
	{	};

	/**
	 * Function Fang_expedition_ExpeditionMountData.Fang_expedition_ExpeditionMountData_C.UpdateIcon
	 */
	struct UFang_expedition_ExpeditionMountData_C_UpdateIcon_Params
	{	};

	/**
	 * Function Fang_expedition_ExpeditionMountData.Fang_expedition_ExpeditionMountData_C.AddUniqueId
	 */
	struct UFang_expedition_ExpeditionMountData_C_AddUniqueId_Params
	{
	public:
		class FString                                              UniqueId;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function Fang_expedition_ExpeditionMountData.Fang_expedition_ExpeditionMountData_C.ClearFangData
	 */
	struct UFang_expedition_ExpeditionMountData_C_ClearFangData_Params
	{	};

	/**
	 * Function Fang_expedition_ExpeditionMountData.Fang_expedition_ExpeditionMountData_C.Construct
	 */
	struct UFang_expedition_ExpeditionMountData_C_Construct_Params
	{	};

	/**
	 * Function Fang_expedition_ExpeditionMountData.Fang_expedition_ExpeditionMountData_C.OnClickIcon1
	 */
	struct UFang_expedition_ExpeditionMountData_C_OnClickIcon1_Params
	{
	public:
		class UCommonIcon_C*                                       Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Fang_expedition_ExpeditionMountData.Fang_expedition_ExpeditionMountData_C.OnClickIcon2
	 */
	struct UFang_expedition_ExpeditionMountData_C_OnClickIcon2_Params
	{
	public:
		class UCommonIcon_C*                                       Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Fang_expedition_ExpeditionMountData.Fang_expedition_ExpeditionMountData_C.OnClickIcon3
	 */
	struct UFang_expedition_ExpeditionMountData_C_OnClickIcon3_Params
	{
	public:
		class UCommonIcon_C*                                       Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Fang_expedition_ExpeditionMountData.Fang_expedition_ExpeditionMountData_C.OnClickIcon4
	 */
	struct UFang_expedition_ExpeditionMountData_C_OnClickIcon4_Params
	{
	public:
		class UCommonIcon_C*                                       Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Fang_expedition_ExpeditionMountData.Fang_expedition_ExpeditionMountData_C.OnClickIcon5
	 */
	struct UFang_expedition_ExpeditionMountData_C_OnClickIcon5_Params
	{
	public:
		class UCommonIcon_C*                                       Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Fang_expedition_ExpeditionMountData.Fang_expedition_ExpeditionMountData_C.Destruct
	 */
	struct UFang_expedition_ExpeditionMountData_C_Destruct_Params
	{	};

	/**
	 * Function Fang_expedition_ExpeditionMountData.Fang_expedition_ExpeditionMountData_C.ExecuteUbergraph_Fang_expedition_ExpeditionMountData
	 */
	struct UFang_expedition_ExpeditionMountData_C_ExecuteUbergraph_Fang_expedition_ExpeditionMountData_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_R6VF[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Fang_expedition_ExpeditionMountData.Fang_expedition_ExpeditionMountData_C.OnClickMountIcon__DelegateSignature
	 */
	struct UFang_expedition_ExpeditionMountData_C_OnClickMountIcon__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
