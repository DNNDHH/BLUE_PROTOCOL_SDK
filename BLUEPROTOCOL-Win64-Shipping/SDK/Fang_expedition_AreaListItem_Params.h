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
	 * Function Fang_expedition_AreaListItem.Fang_expedition_AreaListItem_C.ShowNewMark
	 */
	struct UFang_expedition_AreaListItem_C_ShowNewMark_Params
	{
	public:
		bool                                                       InParam;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Fang_expedition_AreaListItem.Fang_expedition_AreaListItem_C.ClearNewMark
	 */
	struct UFang_expedition_AreaListItem_C_ClearNewMark_Params
	{	};

	/**
	 * Function Fang_expedition_AreaListItem.Fang_expedition_AreaListItem_C.CheckNewMark
	 */
	struct UFang_expedition_AreaListItem_C_CheckNewMark_Params
	{
	public:
		class FString                                              InParam;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       OutParam;                                                // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_3ZLN[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Fang_expedition_AreaListItem.Fang_expedition_AreaListItem_C.SetBtnSelected
	 */
	struct UFang_expedition_AreaListItem_C_SetBtnSelected_Params
	{
	public:
		bool                                                       BtnSelected;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_WX6Y[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Fang_expedition_AreaListItem.Fang_expedition_AreaListItem_C.SetFieldData
	 */
	struct UFang_expedition_AreaListItem_C_SetFieldData_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_5KTO[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              Field;                                                   // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function Fang_expedition_AreaListItem.Fang_expedition_AreaListItem_C.GetData
	 */
	struct UFang_expedition_AreaListItem_C_GetData_Params
	{
	public:
		struct FSBFang_expeditionAreaData                          AreaData;                                                // 0x0000(0x00A8)  (Parm, OutParm)
	};

	/**
	 * Function Fang_expedition_AreaListItem.Fang_expedition_AreaListItem_C.ResetPlayIcon
	 */
	struct UFang_expedition_AreaListItem_C_ResetPlayIcon_Params
	{	};

	/**
	 * Function Fang_expedition_AreaListItem.Fang_expedition_AreaListItem_C.CheckPlayData
	 */
	struct UFang_expedition_AreaListItem_C_CheckPlayData_Params
	{
	public:
		TArray<struct FSBFang_expeditionPlayData>                  PlayDataList;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       IsField;                                                 // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_YXWF[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Fang_expedition_AreaListItem.Fang_expedition_AreaListItem_C.SetData
	 */
	struct UFang_expedition_AreaListItem_C_SetData_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_NEEN[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSBFang_expeditionAreaData                          Data;                                                    // 0x0008(0x00A8)  (BlueprintVisible, BlueprintReadOnly, Parm)
		int32_t                                                    BgOverwrite;                                             // 0x00B0(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    CategoryOverwrite;                                       // 0x00B4(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Fang_expedition_AreaListItem.Fang_expedition_AreaListItem_C.BGTypeSet
	 */
	struct UFang_expedition_AreaListItem_C_BGTypeSet_Params
	{
	public:
		int32_t                                                    Type;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Fang_expedition_AreaListItem.Fang_expedition_AreaListItem_C.BndEvt__Fang_expedition_AreaListItem_TownSelectButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 */
	struct UFang_expedition_AreaListItem_C_BndEvt__Fang_expedition_AreaListItem_TownSelectButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Fang_expedition_AreaListItem.Fang_expedition_AreaListItem_C.BndEvt__MountExpedition_AreaListItem_SelectButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UFang_expedition_AreaListItem_C_BndEvt__MountExpedition_AreaListItem_SelectButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Fang_expedition_AreaListItem.Fang_expedition_AreaListItem_C.BndEvt__Fang_expedition_AreaListItem_SelectButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 */
	struct UFang_expedition_AreaListItem_C_BndEvt__Fang_expedition_AreaListItem_SelectButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Fang_expedition_AreaListItem.Fang_expedition_AreaListItem_C.BndEvt__Fang_expedition_AreaListItem_SelectButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
	 */
	struct UFang_expedition_AreaListItem_C_BndEvt__Fang_expedition_AreaListItem_SelectButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Fang_expedition_AreaListItem.Fang_expedition_AreaListItem_C.ExecuteUbergraph_Fang_expedition_AreaListItem
	 */
	struct UFang_expedition_AreaListItem_C_ExecuteUbergraph_Fang_expedition_AreaListItem_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Fang_expedition_AreaListItem.Fang_expedition_AreaListItem_C.OnItemSelected__DelegateSignature
	 */
	struct UFang_expedition_AreaListItem_C_OnItemSelected__DelegateSignature_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
