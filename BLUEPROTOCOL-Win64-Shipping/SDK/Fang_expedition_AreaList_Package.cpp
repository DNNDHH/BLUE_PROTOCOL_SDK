/**
 * Name: BLUEPROTOCOL-Win64-Shipping
 * Version: 1.6.0
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_AreaList.Fang_expedition_AreaList_C.SortFieldMapIdList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FString>                              MapIdList                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UFang_expedition_AreaList_C::SortFieldMapIdList(TArray<class FString>* MapIdList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_AreaList.Fang_expedition_AreaList_C.SortFieldMapIdList");
		
		UFang_expedition_AreaList_C_SortFieldMapIdList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MapIdList != nullptr)
			*MapIdList = params.MapIdList;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_AreaList.Fang_expedition_AreaList_C.Update New MarkList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InId                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UFang_expedition_AreaList_C::UpdateNewMarkList(const class FString& InId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_AreaList.Fang_expedition_AreaList_C.Update New MarkList");
		
		UFang_expedition_AreaList_C_UpdateNewMarkList_Params params {};
		params.InId = InId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_AreaList.Fang_expedition_AreaList_C.CheckNewMark
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InParam                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		bool                                               OutParam                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFang_expedition_AreaList_C::CheckNewMark(const class FString& InParam, bool* OutParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_AreaList.Fang_expedition_AreaList_C.CheckNewMark");
		
		UFang_expedition_AreaList_C_CheckNewMark_Params params {};
		params.InParam = InParam;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutParam != nullptr)
			*OutParam = params.OutParam;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_AreaList.Fang_expedition_AreaList_C.CheckNewMarkFieldList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      FieldName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UFang_expedition_AreaList_C::CheckNewMarkFieldList(const class FString& FieldName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_AreaList.Fang_expedition_AreaList_C.CheckNewMarkFieldList");
		
		UFang_expedition_AreaList_C_CheckNewMarkFieldList_Params params {};
		params.FieldName = FieldName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_AreaList.Fang_expedition_AreaList_C.GetTownId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            listIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      ID                                                         (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UFang_expedition_AreaList_C::GetTownId(int32_t listIndex, class FString* ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_AreaList.Fang_expedition_AreaList_C.GetTownId");
		
		UFang_expedition_AreaList_C_GetTownId_Params params {};
		params.listIndex = listIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ID != nullptr)
			*ID = params.ID;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_AreaList.Fang_expedition_AreaList_C.Finish
	 * 		Flags  -> ()
	 */
	void UFang_expedition_AreaList_C::Finish()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_AreaList.Fang_expedition_AreaList_C.Finish");
		
		UFang_expedition_AreaList_C_Finish_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_AreaList.Fang_expedition_AreaList_C.PlayDungeonSlotAnimation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFang_expedition_AreaList_C::PlayDungeonSlotAnimation(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_AreaList.Fang_expedition_AreaList_C.PlayDungeonSlotAnimation");
		
		UFang_expedition_AreaList_C_PlayDungeonSlotAnimation_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_AreaList.Fang_expedition_AreaList_C.ClearBtn
	 * 		Flags  -> ()
	 */
	void UFang_expedition_AreaList_C::ClearBtn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_AreaList.Fang_expedition_AreaList_C.ClearBtn");
		
		UFang_expedition_AreaList_C_ClearBtn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_AreaList.Fang_expedition_AreaList_C.SetBtn_Dungeon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFang_expedition_AreaList_C::SetBtn_Dungeon(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_AreaList.Fang_expedition_AreaList_C.SetBtn_Dungeon");
		
		UFang_expedition_AreaList_C_SetBtn_Dungeon_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_AreaList.Fang_expedition_AreaList_C.SetBtn_Field
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFang_expedition_AreaList_C::SetBtn_Field(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_AreaList.Fang_expedition_AreaList_C.SetBtn_Field");
		
		UFang_expedition_AreaList_C_SetBtn_Field_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_AreaList.Fang_expedition_AreaList_C.SetBtn_Town
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFang_expedition_AreaList_C::SetBtn_Town(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_AreaList.Fang_expedition_AreaList_C.SetBtn_Town");
		
		UFang_expedition_AreaList_C_SetBtn_Town_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_AreaList.Fang_expedition_AreaList_C.GetFieldAreaData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSBFang_expeditionAreaData                  Data                                                       (Parm, OutParm)
	 */
	void UFang_expedition_AreaList_C::GetFieldAreaData(int32_t Index, struct FSBFang_expeditionAreaData* Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_AreaList.Fang_expedition_AreaList_C.GetFieldAreaData");
		
		UFang_expedition_AreaList_C_GetFieldAreaData_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Data != nullptr)
			*Data = params.Data;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_AreaList.Fang_expedition_AreaList_C.Initialize
	 * 		Flags  -> ()
	 */
	void UFang_expedition_AreaList_C::Initialize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_AreaList.Fang_expedition_AreaList_C.Initialize");
		
		UFang_expedition_AreaList_C_Initialize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_AreaList.Fang_expedition_AreaList_C.SetExpeditionData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBFang_expeditionData                      Expedition_Data                                            (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UFang_expedition_AreaList_C::SetExpeditionData(const struct FSBFang_expeditionData& Expedition_Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_AreaList.Fang_expedition_AreaList_C.SetExpeditionData");
		
		UFang_expedition_AreaList_C_SetExpeditionData_Params params {};
		params.Expedition_Data = Expedition_Data;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_AreaList.Fang_expedition_AreaList_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFang_expedition_AreaList_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_AreaList.Fang_expedition_AreaList_C.PreConstruct");
		
		UFang_expedition_AreaList_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_AreaList.Fang_expedition_AreaList_C.Construct
	 * 		Flags  -> ()
	 */
	void UFang_expedition_AreaList_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_AreaList.Fang_expedition_AreaList_C.Construct");
		
		UFang_expedition_AreaList_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_AreaList.Fang_expedition_AreaList_C.CB_ListItemClick_Town
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFang_expedition_AreaList_C::CB_ListItemClick_Town(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_AreaList.Fang_expedition_AreaList_C.CB_ListItemClick_Town");
		
		UFang_expedition_AreaList_C_CB_ListItemClick_Town_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_AreaList.Fang_expedition_AreaList_C.CB_ListItemClick_Field
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Field                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFang_expedition_AreaList_C::CB_ListItemClick_Field(const class FString& Field, int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_AreaList.Fang_expedition_AreaList_C.CB_ListItemClick_Field");
		
		UFang_expedition_AreaList_C_CB_ListItemClick_Field_Params params {};
		params.Field = Field;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_AreaList.Fang_expedition_AreaList_C.CB_DungeonTicketButtonClick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFang_expedition_AreaList_C::CB_DungeonTicketButtonClick(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_AreaList.Fang_expedition_AreaList_C.CB_DungeonTicketButtonClick");
		
		UFang_expedition_AreaList_C_CB_DungeonTicketButtonClick_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_AreaList.Fang_expedition_AreaList_C.CB_DungeonExpeditionClick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSBFang_expeditionPlayData                  PlayData                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UFang_expedition_AreaList_C::CB_DungeonExpeditionClick(int32_t Index, const struct FSBFang_expeditionPlayData& PlayData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_AreaList.Fang_expedition_AreaList_C.CB_DungeonExpeditionClick");
		
		UFang_expedition_AreaList_C_CB_DungeonExpeditionClick_Params params {};
		params.Index = Index;
		params.PlayData = PlayData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_AreaList.Fang_expedition_AreaList_C.CB_DungeonStandbyClick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFang_expedition_AreaList_C::CB_DungeonStandbyClick(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_AreaList.Fang_expedition_AreaList_C.CB_DungeonStandbyClick");
		
		UFang_expedition_AreaList_C_CB_DungeonStandbyClick_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_AreaList.Fang_expedition_AreaList_C.CB_DungeonAnimationFinish
	 * 		Flags  -> ()
	 */
	void UFang_expedition_AreaList_C::CB_DungeonAnimationFinish()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_AreaList.Fang_expedition_AreaList_C.CB_DungeonAnimationFinish");
		
		UFang_expedition_AreaList_C_CB_DungeonAnimationFinish_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_AreaList.Fang_expedition_AreaList_C.Destruct
	 * 		Flags  -> ()
	 */
	void UFang_expedition_AreaList_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_AreaList.Fang_expedition_AreaList_C.Destruct");
		
		UFang_expedition_AreaList_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_AreaList.Fang_expedition_AreaList_C.ExecuteUbergraph_Fang_expedition_AreaList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFang_expedition_AreaList_C::ExecuteUbergraph_Fang_expedition_AreaList(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_AreaList.Fang_expedition_AreaList_C.ExecuteUbergraph_Fang_expedition_AreaList");
		
		UFang_expedition_AreaList_C_ExecuteUbergraph_Fang_expedition_AreaList_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_AreaList.Fang_expedition_AreaList_C.OnDungeonAnimationFinish__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UFang_expedition_AreaList_C::OnDungeonAnimationFinish__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_AreaList.Fang_expedition_AreaList_C.OnDungeonAnimationFinish__DelegateSignature");
		
		UFang_expedition_AreaList_C_OnDungeonAnimationFinish__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_AreaList.Fang_expedition_AreaList_C.OnDungeonStandbyClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFang_expedition_AreaList_C::OnDungeonStandbyClicked__DelegateSignature(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_AreaList.Fang_expedition_AreaList_C.OnDungeonStandbyClicked__DelegateSignature");
		
		UFang_expedition_AreaList_C_OnDungeonStandbyClicked__DelegateSignature_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_AreaList.Fang_expedition_AreaList_C.OnDungeonTicketClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFang_expedition_AreaList_C::OnDungeonTicketClicked__DelegateSignature(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_AreaList.Fang_expedition_AreaList_C.OnDungeonTicketClicked__DelegateSignature");
		
		UFang_expedition_AreaList_C_OnDungeonTicketClicked__DelegateSignature_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_AreaList.Fang_expedition_AreaList_C.OnDungeonExpeditionSelect__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSBFang_expeditionPlayData                  PlayData                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UFang_expedition_AreaList_C::OnDungeonExpeditionSelect__DelegateSignature(int32_t Index, const struct FSBFang_expeditionPlayData& PlayData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_AreaList.Fang_expedition_AreaList_C.OnDungeonExpeditionSelect__DelegateSignature");
		
		UFang_expedition_AreaList_C_OnDungeonExpeditionSelect__DelegateSignature_Params params {};
		params.Index = Index;
		params.PlayData = PlayData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_AreaList.Fang_expedition_AreaList_C.OnListItemSelect_Field__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Field                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFang_expedition_AreaList_C::OnListItemSelect_Field__DelegateSignature(const class FString& Field, int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_AreaList.Fang_expedition_AreaList_C.OnListItemSelect_Field__DelegateSignature");
		
		UFang_expedition_AreaList_C_OnListItemSelect_Field__DelegateSignature_Params params {};
		params.Field = Field;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_AreaList.Fang_expedition_AreaList_C.OnListItemSelect_Town__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFang_expedition_AreaList_C::OnListItemSelect_Town__DelegateSignature(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_AreaList.Fang_expedition_AreaList_C.OnListItemSelect_Town__DelegateSignature");
		
		UFang_expedition_AreaList_C_OnListItemSelect_Town__DelegateSignature_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFang_expedition_AreaList_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFang_expedition_AreaList_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Fang_expedition_AreaList.Fang_expedition_AreaList_C");
		return ptr;
	}

}


