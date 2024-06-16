#pragma once

 

// Package: Fang_expedition_AreaList

#include "Basic.hpp"

#include "Fang_expedition_AreaList_classes.hpp"
#include "Fang_expedition_AreaList_parameters.hpp"


namespace SDK
{

// Function Fang_expedition_AreaList.Fang_expedition_AreaList_C.OnListItemSelect_Town__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFang_expedition_AreaList_C::OnListItemSelect_Town__DelegateSignature(int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_AreaList_C", "OnListItemSelect_Town__DelegateSignature");

	Params::Fang_expedition_AreaList_C_OnListItemSelect_Town__DelegateSignature Parms{};

	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fang_expedition_AreaList.Fang_expedition_AreaList_C.OnListItemSelect_Field__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Field                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFang_expedition_AreaList_C::OnListItemSelect_Field__DelegateSignature(const class FString& Field, int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_AreaList_C", "OnListItemSelect_Field__DelegateSignature");

	Params::Fang_expedition_AreaList_C_OnListItemSelect_Field__DelegateSignature Parms{};

	Parms.Field = std::move(Field);
	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fang_expedition_AreaList.Fang_expedition_AreaList_C.OnDungeonExpeditionSelect__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSBFang_expeditionPlayData       PlayData                                               (BlueprintVisible, BlueprintReadOnly, Parm)

void UFang_expedition_AreaList_C::OnDungeonExpeditionSelect__DelegateSignature(int32 Param_Index, const struct FSBFang_expeditionPlayData& PlayData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_AreaList_C", "OnDungeonExpeditionSelect__DelegateSignature");

	Params::Fang_expedition_AreaList_C_OnDungeonExpeditionSelect__DelegateSignature Parms{};

	Parms.Param_Index = Param_Index;
	Parms.PlayData = std::move(PlayData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fang_expedition_AreaList.Fang_expedition_AreaList_C.OnDungeonTicketClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFang_expedition_AreaList_C::OnDungeonTicketClicked__DelegateSignature(int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_AreaList_C", "OnDungeonTicketClicked__DelegateSignature");

	Params::Fang_expedition_AreaList_C_OnDungeonTicketClicked__DelegateSignature Parms{};

	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fang_expedition_AreaList.Fang_expedition_AreaList_C.OnDungeonStandbyClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFang_expedition_AreaList_C::OnDungeonStandbyClicked__DelegateSignature(int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_AreaList_C", "OnDungeonStandbyClicked__DelegateSignature");

	Params::Fang_expedition_AreaList_C_OnDungeonStandbyClicked__DelegateSignature Parms{};

	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fang_expedition_AreaList.Fang_expedition_AreaList_C.OnDungeonAnimationFinish__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UFang_expedition_AreaList_C::OnDungeonAnimationFinish__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_AreaList_C", "OnDungeonAnimationFinish__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Fang_expedition_AreaList.Fang_expedition_AreaList_C.ExecuteUbergraph_Fang_expedition_AreaList
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFang_expedition_AreaList_C::ExecuteUbergraph_Fang_expedition_AreaList(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_AreaList_C", "ExecuteUbergraph_Fang_expedition_AreaList");

	Params::Fang_expedition_AreaList_C_ExecuteUbergraph_Fang_expedition_AreaList Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fang_expedition_AreaList.Fang_expedition_AreaList_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UFang_expedition_AreaList_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_AreaList_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Fang_expedition_AreaList.Fang_expedition_AreaList_C.CB_DungeonAnimationFinish
// (BlueprintCallable, BlueprintEvent)

void UFang_expedition_AreaList_C::CB_DungeonAnimationFinish()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_AreaList_C", "CB_DungeonAnimationFinish");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Fang_expedition_AreaList.Fang_expedition_AreaList_C.CB_DungeonStandbyClick
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFang_expedition_AreaList_C::CB_DungeonStandbyClick(int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_AreaList_C", "CB_DungeonStandbyClick");

	Params::Fang_expedition_AreaList_C_CB_DungeonStandbyClick Parms{};

	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fang_expedition_AreaList.Fang_expedition_AreaList_C.CB_DungeonExpeditionClick
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSBFang_expeditionPlayData       PlayData                                               (BlueprintVisible, BlueprintReadOnly, Parm)

void UFang_expedition_AreaList_C::CB_DungeonExpeditionClick(int32 Param_Index, const struct FSBFang_expeditionPlayData& PlayData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_AreaList_C", "CB_DungeonExpeditionClick");

	Params::Fang_expedition_AreaList_C_CB_DungeonExpeditionClick Parms{};

	Parms.Param_Index = Param_Index;
	Parms.PlayData = std::move(PlayData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fang_expedition_AreaList.Fang_expedition_AreaList_C.CB_DungeonTicketButtonClick
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFang_expedition_AreaList_C::CB_DungeonTicketButtonClick(int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_AreaList_C", "CB_DungeonTicketButtonClick");

	Params::Fang_expedition_AreaList_C_CB_DungeonTicketButtonClick Parms{};

	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fang_expedition_AreaList.Fang_expedition_AreaList_C.CB_ListItemClick_Field
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Field                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFang_expedition_AreaList_C::CB_ListItemClick_Field(const class FString& Field, int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_AreaList_C", "CB_ListItemClick_Field");

	Params::Fang_expedition_AreaList_C_CB_ListItemClick_Field Parms{};

	Parms.Field = std::move(Field);
	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fang_expedition_AreaList.Fang_expedition_AreaList_C.CB_ListItemClick_Town
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFang_expedition_AreaList_C::CB_ListItemClick_Town(int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_AreaList_C", "CB_ListItemClick_Town");

	Params::Fang_expedition_AreaList_C_CB_ListItemClick_Town Parms{};

	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fang_expedition_AreaList.Fang_expedition_AreaList_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UFang_expedition_AreaList_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_AreaList_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Fang_expedition_AreaList.Fang_expedition_AreaList_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFang_expedition_AreaList_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_AreaList_C", "PreConstruct");

	Params::Fang_expedition_AreaList_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fang_expedition_AreaList.Fang_expedition_AreaList_C.SetExpeditionData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBFang_expeditionData           Expedition_Data                                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UFang_expedition_AreaList_C::SetExpeditionData(const struct FSBFang_expeditionData& Expedition_Data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_AreaList_C", "SetExpeditionData");

	Params::Fang_expedition_AreaList_C_SetExpeditionData Parms{};

	Parms.Expedition_Data = std::move(Expedition_Data);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fang_expedition_AreaList.Fang_expedition_AreaList_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)

void UFang_expedition_AreaList_C::Initialize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_AreaList_C", "Initialize");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Fang_expedition_AreaList.Fang_expedition_AreaList_C.GetFieldAreaData
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSBFang_expeditionAreaData       Data                                                   (Parm, OutParm)

void UFang_expedition_AreaList_C::GetFieldAreaData(int32 Param_Index, struct FSBFang_expeditionAreaData* Data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_AreaList_C", "GetFieldAreaData");

	Params::Fang_expedition_AreaList_C_GetFieldAreaData Parms{};

	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);

	if (Data != nullptr)
		*Data = std::move(Parms.Data);
}


// Function Fang_expedition_AreaList.Fang_expedition_AreaList_C.SetBtn_Town
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFang_expedition_AreaList_C::SetBtn_Town(int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_AreaList_C", "SetBtn_Town");

	Params::Fang_expedition_AreaList_C_SetBtn_Town Parms{};

	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fang_expedition_AreaList.Fang_expedition_AreaList_C.SetBtn_Field
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFang_expedition_AreaList_C::SetBtn_Field(int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_AreaList_C", "SetBtn_Field");

	Params::Fang_expedition_AreaList_C_SetBtn_Field Parms{};

	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fang_expedition_AreaList.Fang_expedition_AreaList_C.SetBtn_Dungeon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFang_expedition_AreaList_C::SetBtn_Dungeon(int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_AreaList_C", "SetBtn_Dungeon");

	Params::Fang_expedition_AreaList_C_SetBtn_Dungeon Parms{};

	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fang_expedition_AreaList.Fang_expedition_AreaList_C.ClearBtn
// (Public, BlueprintCallable, BlueprintEvent)

void UFang_expedition_AreaList_C::ClearBtn()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_AreaList_C", "ClearBtn");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Fang_expedition_AreaList.Fang_expedition_AreaList_C.PlayDungeonSlotAnimation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFang_expedition_AreaList_C::PlayDungeonSlotAnimation(int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_AreaList_C", "PlayDungeonSlotAnimation");

	Params::Fang_expedition_AreaList_C_PlayDungeonSlotAnimation Parms{};

	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fang_expedition_AreaList.Fang_expedition_AreaList_C.Finish
// (Public, BlueprintCallable, BlueprintEvent)

void UFang_expedition_AreaList_C::Finish()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_AreaList_C", "Finish");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Fang_expedition_AreaList.Fang_expedition_AreaList_C.GetTownId
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   ListIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           ID                                                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void UFang_expedition_AreaList_C::GetTownId(int32 ListIndex, class FString* ID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_AreaList_C", "GetTownId");

	Params::Fang_expedition_AreaList_C_GetTownId Parms{};

	Parms.ListIndex = ListIndex;

	UObject::ProcessEvent(Func, &Parms);

	if (ID != nullptr)
		*ID = std::move(Parms.ID);
}


// Function Fang_expedition_AreaList.Fang_expedition_AreaList_C.CheckNewMarkFieldList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           FieldName                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UFang_expedition_AreaList_C::CheckNewMarkFieldList(const class FString& FieldName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_AreaList_C", "CheckNewMarkFieldList");

	Params::Fang_expedition_AreaList_C_CheckNewMarkFieldList Parms{};

	Parms.FieldName = std::move(FieldName);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fang_expedition_AreaList.Fang_expedition_AreaList_C.CheckNewMark
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           InParam                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                                    OutParam                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFang_expedition_AreaList_C::CheckNewMark(const class FString& InParam, bool* OutParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_AreaList_C", "CheckNewMark");

	Params::Fang_expedition_AreaList_C_CheckNewMark Parms{};

	Parms.InParam = std::move(InParam);

	UObject::ProcessEvent(Func, &Parms);

	if (OutParam != nullptr)
		*OutParam = Parms.OutParam;
}


// Function Fang_expedition_AreaList.Fang_expedition_AreaList_C.Update New MarkList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           InId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UFang_expedition_AreaList_C::Update_New_MarkList(const class FString& InId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_AreaList_C", "Update New MarkList");

	Params::Fang_expedition_AreaList_C_Update_New_MarkList Parms{};

	Parms.InId = std::move(InId);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fang_expedition_AreaList.Fang_expedition_AreaList_C.SortFieldMapIdList
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FString>                   MapIdList                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UFang_expedition_AreaList_C::SortFieldMapIdList(TArray<class FString>& MapIdList)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_AreaList_C", "SortFieldMapIdList");

	Params::Fang_expedition_AreaList_C_SortFieldMapIdList Parms{};

	Parms.MapIdList = std::move(MapIdList);

	UObject::ProcessEvent(Func, &Parms);

	MapIdList = std::move(Parms.MapIdList);
}

}

