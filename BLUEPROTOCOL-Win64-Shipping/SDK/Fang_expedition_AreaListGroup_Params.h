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
	 * Function Fang_expedition_AreaListGroup.Fang_expedition_AreaListGroup_C.ClearFieldList
	 */
	struct UFang_expedition_AreaListGroup_C_ClearFieldList_Params
	{	};

	/**
	 * Function Fang_expedition_AreaListGroup.Fang_expedition_AreaListGroup_C.SetNewMarkListEx
	 */
	struct UFang_expedition_AreaListGroup_C_SetNewMarkListEx_Params
	{
	public:
		bool                                                       InParam;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_M38P[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              InFieldId;                                               // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function Fang_expedition_AreaListGroup.Fang_expedition_AreaListGroup_C.SetBtn
	 */
	struct UFang_expedition_AreaListGroup_C_SetBtn_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Fang_expedition_AreaListGroup.Fang_expedition_AreaListGroup_C.CB_FieldItemClick
	 */
	struct UFang_expedition_AreaListGroup_C_CB_FieldItemClick_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Fang_expedition_AreaListGroup.Fang_expedition_AreaListGroup_C.SetFieldData
	 */
	struct UFang_expedition_AreaListGroup_C_SetFieldData_Params
	{
	public:
		class FString                                              Field;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function Fang_expedition_AreaListGroup.Fang_expedition_AreaListGroup_C.GetData
	 */
	struct UFang_expedition_AreaListGroup_C_GetData_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Valid;                                                   // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_JHEF[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSBFang_expeditionAreaData                          AreaData;                                                // 0x0008(0x00A8)  (Parm, OutParm)
	};

	/**
	 * Function Fang_expedition_AreaListGroup.Fang_expedition_AreaListGroup_C.CheckPlayIcon
	 */
	struct UFang_expedition_AreaListGroup_C_CheckPlayIcon_Params
	{
	public:
		TArray<struct FSBFang_expeditionPlayData>                  PlayData;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       IsField;                                                 // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_1PGB[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Fang_expedition_AreaListGroup.Fang_expedition_AreaListGroup_C.Finish
	 */
	struct UFang_expedition_AreaListGroup_C_Finish_Params
	{	};

	/**
	 * Function Fang_expedition_AreaListGroup.Fang_expedition_AreaListGroup_C.Initialize
	 */
	struct UFang_expedition_AreaListGroup_C_Initialize_Params
	{
	public:
		int32_t                                                    Type;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Fang_expedition_AreaListGroup.Fang_expedition_AreaListGroup_C.Clear
	 */
	struct UFang_expedition_AreaListGroup_C_Clear_Params
	{	};

	/**
	 * Function Fang_expedition_AreaListGroup.Fang_expedition_AreaListGroup_C.CB_AreaItemClick
	 */
	struct UFang_expedition_AreaListGroup_C_CB_AreaItemClick_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Fang_expedition_AreaListGroup.Fang_expedition_AreaListGroup_C.UpdateData
	 */
	struct UFang_expedition_AreaListGroup_C_UpdateData_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Fang_expedition_AreaListGroup.Fang_expedition_AreaListGroup_C.SetData
	 */
	struct UFang_expedition_AreaListGroup_C_SetData_Params
	{
	public:
		struct FSBFang_expeditionAreaData                          AreaData;                                                // 0x0000(0x00A8)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       IsField;                                                 // 0x00A8(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_RN7M[0x3];                                   // 0x00A9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Fang_expedition_AreaListGroup.Fang_expedition_AreaListGroup_C.Destruct
	 */
	struct UFang_expedition_AreaListGroup_C_Destruct_Params
	{	};

	/**
	 * Function Fang_expedition_AreaListGroup.Fang_expedition_AreaListGroup_C.ExecuteUbergraph_Fang_expedition_AreaListGroup
	 */
	struct UFang_expedition_AreaListGroup_C_ExecuteUbergraph_Fang_expedition_AreaListGroup_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Fang_expedition_AreaListGroup.Fang_expedition_AreaListGroup_C.OnFieldClick__DelegateSignature
	 */
	struct UFang_expedition_AreaListGroup_C_OnFieldClick__DelegateSignature_Params
	{
	public:
		class FString                                              Field;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		int32_t                                                    Index;                                                   // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Fang_expedition_AreaListGroup.Fang_expedition_AreaListGroup_C.OnAreaClick__DelegateSignature
	 */
	struct UFang_expedition_AreaListGroup_C_OnAreaClick__DelegateSignature_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
