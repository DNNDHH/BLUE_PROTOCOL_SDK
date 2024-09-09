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
	 * Function MyCharaMenu_Other.MyCharaMenu_Other_C.GetPlayerTagPram
	 */
	struct UMyCharaMenu_Other_C_GetPlayerTagPram_Params
	{
	public:
		struct FSBMasterNaEvent                                    SBMasterNaEvent;                                         // 0x0000(0x00C0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       Active;                                                  // 0x00C0(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_UUBA[0x7];                                   // 0x00C1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              BuffRate;                                                // 0x00C8(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function MyCharaMenu_Other.MyCharaMenu_Other_C.UpdatePlayerTag
	 */
	struct UMyCharaMenu_Other_C_UpdatePlayerTag_Params
	{	};

	/**
	 * Function MyCharaMenu_Other.MyCharaMenu_Other_C.Get Free Buff Text
	 */
	struct UMyCharaMenu_Other_C_GetFreeBuffText_Params
	{
	public:
		ESBFreeBuffPointType                                       Type;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_KHVO[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              Text;                                                    // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
		struct FSBStatusAlimentConfig                              OutRow;                                                  // 0x0018(0x0090)  (Parm, OutParm)
	};

	/**
	 * Function MyCharaMenu_Other.MyCharaMenu_Other_C.UpdateFreeBuff
	 */
	struct UMyCharaMenu_Other_C_UpdateFreeBuff_Params
	{	};

	/**
	 * Function MyCharaMenu_Other.MyCharaMenu_Other_C.FixActiveList
	 */
	struct UMyCharaMenu_Other_C_FixActiveList_Params
	{	};

	/**
	 * Function MyCharaMenu_Other.MyCharaMenu_Other_C.TryGetActiveListItem
	 */
	struct UMyCharaMenu_Other_C_TryGetActiveListItem_Params
	{
	public:
		class UEffect_Other_C*                                     item;                                                    // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MyCharaMenu_Other.MyCharaMenu_Other_C.GetBuffValue
	 */
	struct UMyCharaMenu_Other_C_GetBuffValue_Params
	{
	public:
		int32_t                                                    BaseValue;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsRate;                                                  // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EOutGameBuffType                                           InBuffType;                                              // 0x0005(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_635T[0x2];                                   // 0x0006(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                ReturnValue;                                             // 0x0008(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function MyCharaMenu_Other.MyCharaMenu_Other_C.CreateStockOutGameBuff
	 */
	struct UMyCharaMenu_Other_C_CreateStockOutGameBuff_Params
	{	};

	/**
	 * Function MyCharaMenu_Other.MyCharaMenu_Other_C.UpdateActiveNetCafeBuff
	 */
	struct UMyCharaMenu_Other_C_UpdateActiveNetCafeBuff_Params
	{	};

	/**
	 * Function MyCharaMenu_Other.MyCharaMenu_Other_C.UpdateActiveOutGameBuff
	 */
	struct UMyCharaMenu_Other_C_UpdateActiveOutGameBuff_Params
	{	};

	/**
	 * Function MyCharaMenu_Other.MyCharaMenu_Other_C.Construct
	 */
	struct UMyCharaMenu_Other_C_Construct_Params
	{	};

	/**
	 * Function MyCharaMenu_Other.MyCharaMenu_Other_C.Update
	 */
	struct UMyCharaMenu_Other_C_Update_Params
	{	};

	/**
	 * Function MyCharaMenu_Other.MyCharaMenu_Other_C.ExecuteUbergraph_MyCharaMenu_Other
	 */
	struct UMyCharaMenu_Other_C_ExecuteUbergraph_MyCharaMenu_Other_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
