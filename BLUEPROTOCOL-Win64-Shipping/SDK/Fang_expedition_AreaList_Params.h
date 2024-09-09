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
	 * Function Fang_expedition_AreaList.Fang_expedition_AreaList_C.SortFieldMapIdList
	 */
	struct UFang_expedition_AreaList_C_SortFieldMapIdList_Params
	{
	public:
		TArray<class FString>                                      MapIdList;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Fang_expedition_AreaList.Fang_expedition_AreaList_C.Update New MarkList
	 */
	struct UFang_expedition_AreaList_C_UpdateNewMarkList_Params
	{
	public:
		class FString                                              InId;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function Fang_expedition_AreaList.Fang_expedition_AreaList_C.CheckNewMark
	 */
	struct UFang_expedition_AreaList_C_CheckNewMark_Params
	{
	public:
		class FString                                              InParam;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       OutParam;                                                // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_CACS[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Fang_expedition_AreaList.Fang_expedition_AreaList_C.CheckNewMarkFieldList
	 */
	struct UFang_expedition_AreaList_C_CheckNewMarkFieldList_Params
	{
	public:
		class FString                                              FieldName;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function Fang_expedition_AreaList.Fang_expedition_AreaList_C.GetTownId
	 */
	struct UFang_expedition_AreaList_C_GetTownId_Params
	{
	public:
		int32_t                                                    listIndex;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_OAL4[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ID;                                                      // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function Fang_expedition_AreaList.Fang_expedition_AreaList_C.Finish
	 */
	struct UFang_expedition_AreaList_C_Finish_Params
	{	};

	/**
	 * Function Fang_expedition_AreaList.Fang_expedition_AreaList_C.PlayDungeonSlotAnimation
	 */
	struct UFang_expedition_AreaList_C_PlayDungeonSlotAnimation_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Fang_expedition_AreaList.Fang_expedition_AreaList_C.ClearBtn
	 */
	struct UFang_expedition_AreaList_C_ClearBtn_Params
	{	};

	/**
	 * Function Fang_expedition_AreaList.Fang_expedition_AreaList_C.SetBtn_Dungeon
	 */
	struct UFang_expedition_AreaList_C_SetBtn_Dungeon_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Fang_expedition_AreaList.Fang_expedition_AreaList_C.SetBtn_Field
	 */
	struct UFang_expedition_AreaList_C_SetBtn_Field_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Fang_expedition_AreaList.Fang_expedition_AreaList_C.SetBtn_Town
	 */
	struct UFang_expedition_AreaList_C_SetBtn_Town_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Fang_expedition_AreaList.Fang_expedition_AreaList_C.GetFieldAreaData
	 */
	struct UFang_expedition_AreaList_C_GetFieldAreaData_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_34JX[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSBFang_expeditionAreaData                          Data;                                                    // 0x0008(0x00A8)  (Parm, OutParm)
	};

	/**
	 * Function Fang_expedition_AreaList.Fang_expedition_AreaList_C.Initialize
	 */
	struct UFang_expedition_AreaList_C_Initialize_Params
	{	};

	/**
	 * Function Fang_expedition_AreaList.Fang_expedition_AreaList_C.SetExpeditionData
	 */
	struct UFang_expedition_AreaList_C_SetExpeditionData_Params
	{
	public:
		struct FSBFang_expeditionData                              Expedition_Data;                                         // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Fang_expedition_AreaList.Fang_expedition_AreaList_C.PreConstruct
	 */
	struct UFang_expedition_AreaList_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Fang_expedition_AreaList.Fang_expedition_AreaList_C.Construct
	 */
	struct UFang_expedition_AreaList_C_Construct_Params
	{	};

	/**
	 * Function Fang_expedition_AreaList.Fang_expedition_AreaList_C.CB_ListItemClick_Town
	 */
	struct UFang_expedition_AreaList_C_CB_ListItemClick_Town_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Fang_expedition_AreaList.Fang_expedition_AreaList_C.CB_ListItemClick_Field
	 */
	struct UFang_expedition_AreaList_C_CB_ListItemClick_Field_Params
	{
	public:
		class FString                                              Field;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		int32_t                                                    Index;                                                   // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Fang_expedition_AreaList.Fang_expedition_AreaList_C.CB_DungeonTicketButtonClick
	 */
	struct UFang_expedition_AreaList_C_CB_DungeonTicketButtonClick_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Fang_expedition_AreaList.Fang_expedition_AreaList_C.CB_DungeonExpeditionClick
	 */
	struct UFang_expedition_AreaList_C_CB_DungeonExpeditionClick_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_MVCW[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSBFang_expeditionPlayData                          PlayData;                                                // 0x0008(0x0120)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Fang_expedition_AreaList.Fang_expedition_AreaList_C.CB_DungeonStandbyClick
	 */
	struct UFang_expedition_AreaList_C_CB_DungeonStandbyClick_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Fang_expedition_AreaList.Fang_expedition_AreaList_C.CB_DungeonAnimationFinish
	 */
	struct UFang_expedition_AreaList_C_CB_DungeonAnimationFinish_Params
	{	};

	/**
	 * Function Fang_expedition_AreaList.Fang_expedition_AreaList_C.Destruct
	 */
	struct UFang_expedition_AreaList_C_Destruct_Params
	{	};

	/**
	 * Function Fang_expedition_AreaList.Fang_expedition_AreaList_C.ExecuteUbergraph_Fang_expedition_AreaList
	 */
	struct UFang_expedition_AreaList_C_ExecuteUbergraph_Fang_expedition_AreaList_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Fang_expedition_AreaList.Fang_expedition_AreaList_C.OnDungeonAnimationFinish__DelegateSignature
	 */
	struct UFang_expedition_AreaList_C_OnDungeonAnimationFinish__DelegateSignature_Params
	{	};

	/**
	 * Function Fang_expedition_AreaList.Fang_expedition_AreaList_C.OnDungeonStandbyClicked__DelegateSignature
	 */
	struct UFang_expedition_AreaList_C_OnDungeonStandbyClicked__DelegateSignature_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Fang_expedition_AreaList.Fang_expedition_AreaList_C.OnDungeonTicketClicked__DelegateSignature
	 */
	struct UFang_expedition_AreaList_C_OnDungeonTicketClicked__DelegateSignature_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Fang_expedition_AreaList.Fang_expedition_AreaList_C.OnDungeonExpeditionSelect__DelegateSignature
	 */
	struct UFang_expedition_AreaList_C_OnDungeonExpeditionSelect__DelegateSignature_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_YIEI[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSBFang_expeditionPlayData                          PlayData;                                                // 0x0008(0x0120)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Fang_expedition_AreaList.Fang_expedition_AreaList_C.OnListItemSelect_Field__DelegateSignature
	 */
	struct UFang_expedition_AreaList_C_OnListItemSelect_Field__DelegateSignature_Params
	{
	public:
		class FString                                              Field;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		int32_t                                                    Index;                                                   // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Fang_expedition_AreaList.Fang_expedition_AreaList_C.OnListItemSelect_Town__DelegateSignature
	 */
	struct UFang_expedition_AreaList_C_OnListItemSelect_Town__DelegateSignature_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
