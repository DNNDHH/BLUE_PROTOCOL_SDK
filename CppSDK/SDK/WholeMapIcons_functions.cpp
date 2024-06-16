#pragma once

 

// Package: WholeMapIcons

#include "Basic.hpp"

#include "WholeMapIcons_classes.hpp"
#include "WholeMapIcons_parameters.hpp"


namespace SDK
{

// Function WholeMapIcons.WholeMapIcons_C.ExecuteUbergraph_WholeMapIcons
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWholeMapIcons_C::ExecuteUbergraph_WholeMapIcons(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WholeMapIcons_C", "ExecuteUbergraph_WholeMapIcons");

	Params::WholeMapIcons_C_ExecuteUbergraph_WholeMapIcons Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WholeMapIcons.WholeMapIcons_C.CustomEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Result                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// ESBMapErrorCode                         ErrorCode                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWholeMapIcons_C::CustomEvent(const bool Result, const ESBMapErrorCode ErrorCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WholeMapIcons_C", "CustomEvent");

	Params::WholeMapIcons_C_CustomEvent Parms{};

	Parms.Result = Result;
	Parms.ErrorCode = ErrorCode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WholeMapIcons.WholeMapIcons_C.UnbindOnSaveMapPinInfos
// (BlueprintCallable, BlueprintEvent)

void UWholeMapIcons_C::UnbindOnSaveMapPinInfos()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WholeMapIcons_C", "UnbindOnSaveMapPinInfos");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WholeMapIcons.WholeMapIcons_C.BindOnSaveMapPinInfos
// (BlueprintCallable, BlueprintEvent)

void UWholeMapIcons_C::BindOnSaveMapPinInfos()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WholeMapIcons_C", "BindOnSaveMapPinInfos");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WholeMapIcons.WholeMapIcons_C.UnbindPin
// (BlueprintCallable, BlueprintEvent)

void UWholeMapIcons_C::UnbindPin()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WholeMapIcons_C", "UnbindPin");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WholeMapIcons.WholeMapIcons_C.BindPin
// (BlueprintCallable, BlueprintEvent)

void UWholeMapIcons_C::BindPin()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WholeMapIcons_C", "BindPin");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WholeMapIcons.WholeMapIcons_C.OnInitMapPin
// (BlueprintCallable, BlueprintEvent)

void UWholeMapIcons_C::OnInitMapPin()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WholeMapIcons_C", "OnInitMapPin");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WholeMapIcons.WholeMapIcons_C.BindOnInitMapPin
// (BlueprintCallable, BlueprintEvent)

void UWholeMapIcons_C::BindOnInitMapPin()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WholeMapIcons_C", "BindOnInitMapPin");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WholeMapIcons.WholeMapIcons_C.UnbindOnInitMapPin
// (BlueprintCallable, BlueprintEvent)

void UWholeMapIcons_C::UnbindOnInitMapPin()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WholeMapIcons_C", "UnbindOnInitMapPin");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WholeMapIcons.WholeMapIcons_C.CustomEvent_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USBMapPartyMemberIcon*            InPartyMemberIcon                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsDead                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWholeMapIcons_C::CustomEvent_0(class USBMapPartyMemberIcon* InPartyMemberIcon, bool IsDead)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WholeMapIcons_C", "CustomEvent_0");

	Params::WholeMapIcons_C_CustomEvent_0 Parms{};

	Parms.InPartyMemberIcon = InPartyMemberIcon;
	Parms.IsDead = IsDead;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WholeMapIcons.WholeMapIcons_C.UnbindPartyMemberOnSetDead
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UIconPartyMember_C*               Param_PartyMember                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWholeMapIcons_C::UnbindPartyMemberOnSetDead(class UIconPartyMember_C* Param_PartyMember)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WholeMapIcons_C", "UnbindPartyMemberOnSetDead");

	Params::WholeMapIcons_C_UnbindPartyMemberOnSetDead Parms{};

	Parms.Param_PartyMember = Param_PartyMember;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WholeMapIcons.WholeMapIcons_C.BindPartyMemberOnSetDead
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UIconPartyMember_C*               Param_PartyMember                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWholeMapIcons_C::BindPartyMemberOnSetDead(class UIconPartyMember_C* Param_PartyMember)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WholeMapIcons_C", "BindPartyMemberOnSetDead");

	Params::WholeMapIcons_C_BindPartyMemberOnSetDead Parms{};

	Parms.Param_PartyMember = Param_PartyMember;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WholeMapIcons.WholeMapIcons_C.BindQuest
// (BlueprintCallable, BlueprintEvent)

void UWholeMapIcons_C::BindQuest()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WholeMapIcons_C", "BindQuest");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WholeMapIcons.WholeMapIcons_C.OnPartyMemberUpdate_Event_0
// (BlueprintCallable, BlueprintEvent)

void UWholeMapIcons_C::OnPartyMemberUpdate_Event_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WholeMapIcons_C", "OnPartyMemberUpdate_Event_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WholeMapIcons.WholeMapIcons_C.UnbindPartyMember
// (BlueprintCallable, BlueprintEvent)

void UWholeMapIcons_C::UnbindPartyMember()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WholeMapIcons_C", "UnbindPartyMember");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WholeMapIcons.WholeMapIcons_C.BindPartyMember
// (BlueprintCallable, BlueprintEvent)

void UWholeMapIcons_C::BindPartyMember()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WholeMapIcons_C", "BindPartyMember");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WholeMapIcons.WholeMapIcons_C.RequestCreateFieldStatus
// (BlueprintCallable, BlueprintEvent)

void UWholeMapIcons_C::RequestCreateFieldStatus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WholeMapIcons_C", "RequestCreateFieldStatus");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WholeMapIcons.WholeMapIcons_C.UnbindFieldStatus
// (BlueprintCallable, BlueprintEvent)

void UWholeMapIcons_C::UnbindFieldStatus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WholeMapIcons_C", "UnbindFieldStatus");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WholeMapIcons.WholeMapIcons_C.BindFieldStatus
// (BlueprintCallable, BlueprintEvent)

void UWholeMapIcons_C::BindFieldStatus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WholeMapIcons_C", "BindFieldStatus");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WholeMapIcons.WholeMapIcons_C.CustomEvent_2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          Param                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWholeMapIcons_C::CustomEvent_2(class UObject* Sender, class UObject* Param)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WholeMapIcons_C", "CustomEvent_2");

	Params::WholeMapIcons_C_CustomEvent_2 Parms{};

	Parms.Sender = Sender;
	Parms.Param = Param;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WholeMapIcons.WholeMapIcons_C.UnbindStepList
// (BlueprintCallable, BlueprintEvent)

void UWholeMapIcons_C::UnbindStepList()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WholeMapIcons_C", "UnbindStepList");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WholeMapIcons.WholeMapIcons_C.BindStepList
// (BlueprintCallable, BlueprintEvent)

void UWholeMapIcons_C::BindStepList()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WholeMapIcons_C", "BindStepList");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WholeMapIcons.WholeMapIcons_C.OnSaveQuestCheckList
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWasSuccessful                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWholeMapIcons_C::OnSaveQuestCheckList(const bool bWasSuccessful)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WholeMapIcons_C", "OnSaveQuestCheckList");

	Params::WholeMapIcons_C_OnSaveQuestCheckList Parms{};

	Parms.bWasSuccessful = bWasSuccessful;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WholeMapIcons.WholeMapIcons_C.UnbindCommonComponent
// (BlueprintCallable, BlueprintEvent)

void UWholeMapIcons_C::UnbindCommonComponent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WholeMapIcons_C", "UnbindCommonComponent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WholeMapIcons.WholeMapIcons_C.BindCommonComponent
// (BlueprintCallable, BlueprintEvent)

void UWholeMapIcons_C::BindCommonComponent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WholeMapIcons_C", "BindCommonComponent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WholeMapIcons.WholeMapIcons_C.OnGetMyCharacterInfo_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Result                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWholeMapIcons_C::OnGetMyCharacterInfo_Event_0(bool Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WholeMapIcons_C", "OnGetMyCharacterInfo_Event_0");

	Params::WholeMapIcons_C_OnGetMyCharacterInfo_Event_0 Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WholeMapIcons.WholeMapIcons_C.OnClassChangeNotify_Event_0
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InRetCode                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bInIsExpiredStickerWeapons                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FString>                   InExpiredStickerWeaponUniqueIds                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FSBExpiredEquipmentData          InDirtyExpiredEquipmentData                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWholeMapIcons_C::OnClassChangeNotify_Event_0(const int32 InRetCode, const bool bInIsExpiredStickerWeapons, const TArray<class FString>& InExpiredStickerWeaponUniqueIds, const struct FSBExpiredEquipmentData& InDirtyExpiredEquipmentData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WholeMapIcons_C", "OnClassChangeNotify_Event_0");

	Params::WholeMapIcons_C_OnClassChangeNotify_Event_0 Parms{};

	Parms.InRetCode = InRetCode;
	Parms.bInIsExpiredStickerWeapons = bInIsExpiredStickerWeapons;
	Parms.InExpiredStickerWeaponUniqueIds = std::move(InExpiredStickerWeaponUniqueIds);
	Parms.InDirtyExpiredEquipmentData = std::move(InDirtyExpiredEquipmentData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WholeMapIcons.WholeMapIcons_C.UnbindQuest
// (BlueprintCallable, BlueprintEvent)

void UWholeMapIcons_C::UnbindQuest()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WholeMapIcons_C", "UnbindQuest");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WholeMapIcons.WholeMapIcons_C.OnBind
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UWholeMapIcons_C::OnBind()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WholeMapIcons_C", "OnBind");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WholeMapIcons.WholeMapIcons_C.OnUnbind
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UWholeMapIcons_C::OnUnbind()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WholeMapIcons_C", "OnUnbind");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WholeMapIcons.WholeMapIcons_C.AddIcon
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                           Param_Class                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   ZOrder                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                      IconWidget                                             (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWholeMapIcons_C::AddIcon(class UClass* Param_Class, int32 ZOrder, class UUserWidget** IconWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WholeMapIcons_C", "AddIcon");

	Params::WholeMapIcons_C_AddIcon Parms{};

	Parms.Param_Class = Param_Class;
	Parms.ZOrder = ZOrder;

	UObject::ProcessEvent(Func, &Parms);

	if (IconWidget != nullptr)
		*IconWidget = Parms.IconWidget;
}


// Function WholeMapIcons.WholeMapIcons_C.AddQuestIcon
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InQuestIndex                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWholeMapIcons_C::AddQuestIcon(int32 InQuestIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WholeMapIcons_C", "AddQuestIcon");

	Params::WholeMapIcons_C_AddQuestIcon Parms{};

	Parms.InQuestIndex = InQuestIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WholeMapIcons.WholeMapIcons_C.OnCreateShortPin
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UWholeMapIcons_C::OnCreateShortPin()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WholeMapIcons_C", "OnCreateShortPin");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WholeMapIcons.WholeMapIcons_C.OnCreateFishingIcon
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          InLocation                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWholeMapIcons_C::OnCreateFishingIcon(const struct FVector& InLocation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WholeMapIcons_C", "OnCreateFishingIcon");

	Params::WholeMapIcons_C_OnCreateFishingIcon Parms{};

	Parms.InLocation = std::move(InLocation);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WholeMapIcons.WholeMapIcons_C.OnCreateCampIcon
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          InLocation                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWholeMapIcons_C::OnCreateCampIcon(const struct FVector& InLocation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WholeMapIcons_C", "OnCreateCampIcon");

	Params::WholeMapIcons_C_OnCreateCampIcon Parms{};

	Parms.InLocation = std::move(InLocation);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WholeMapIcons.WholeMapIcons_C.OnCreatePin
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMapPinInfo                      MapPinInfo                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FVector                          InWorldPosition                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWholeMapIcons_C::OnCreatePin(const struct FMapPinInfo& MapPinInfo, const struct FVector& InWorldPosition)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WholeMapIcons_C", "OnCreatePin");

	Params::WholeMapIcons_C_OnCreatePin Parms{};

	Parms.MapPinInfo = std::move(MapPinInfo);
	Parms.InWorldPosition = std::move(InWorldPosition);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WholeMapIcons.WholeMapIcons_C.SetVisiblePinComment
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_IsVisible                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWholeMapIcons_C::SetVisiblePinComment(bool Param_IsVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WholeMapIcons_C", "SetVisiblePinComment");

	Params::WholeMapIcons_C_SetVisiblePinComment Parms{};

	Parms.Param_IsVisible = Param_IsVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WholeMapIcons.WholeMapIcons_C.OnCreateWarpPointIcon
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           LevelName                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                           PortalName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWholeMapIcons_C::OnCreateWarpPointIcon(const class FString& LevelName, const class FString& PortalName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WholeMapIcons_C", "OnCreateWarpPointIcon");

	Params::WholeMapIcons_C_OnCreateWarpPointIcon Parms{};

	Parms.LevelName = std::move(LevelName);
	Parms.PortalName = std::move(PortalName);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WholeMapIcons.WholeMapIcons_C.OnCreateQuestAreaIcon
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          InLocation                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   InRange                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                        InAreaSize                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                     InColor                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWholeMapIcons_C::OnCreateQuestAreaIcon(const struct FVector& InLocation, float InRange, const struct FVector2D& InAreaSize, const struct FLinearColor& InColor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WholeMapIcons_C", "OnCreateQuestAreaIcon");

	Params::WholeMapIcons_C_OnCreateQuestAreaIcon Parms{};

	Parms.InLocation = std::move(InLocation);
	Parms.InRange = InRange;
	Parms.InAreaSize = std::move(InAreaSize);
	Parms.InColor = std::move(InColor);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WholeMapIcons.WholeMapIcons_C.OnCreateQuestIcon
// (Event, Protected, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWholeMapIcons_C::OnCreateQuestIcon()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WholeMapIcons_C", "OnCreateQuestIcon");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WholeMapIcons.WholeMapIcons_C.OnCreateFacilityIcon
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             InProfileId                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESBFacilityType                         InType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSBCharacterProfileLocationData  InLocationData                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FVector                          InLocation                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWholeMapIcons_C::OnCreateFacilityIcon(const class FName InProfileId, ESBFacilityType InType, const struct FSBCharacterProfileLocationData& InLocationData, const struct FVector& InLocation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WholeMapIcons_C", "OnCreateFacilityIcon");

	Params::WholeMapIcons_C_OnCreateFacilityIcon Parms{};

	Parms.InProfileId = InProfileId;
	Parms.InType = InType;
	Parms.InLocationData = std::move(InLocationData);
	Parms.InLocation = std::move(InLocation);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WholeMapIcons.WholeMapIcons_C.OnCreatePartyMemberIcon
// (Event, Protected, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWholeMapIcons_C::OnCreatePartyMemberIcon()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WholeMapIcons_C", "OnCreatePartyMemberIcon");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WholeMapIcons.WholeMapIcons_C.OnDeletePartyMemberIcon
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UWholeMapIcons_C::OnDeletePartyMemberIcon()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WholeMapIcons_C", "OnDeletePartyMemberIcon");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WholeMapIcons.WholeMapIcons_C.AddInterruptQuestIcon
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASBInterruptQuestInstance*        InInstance                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          InLocation                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   InRange                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                        InAreaSize                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWholeMapIcons_C::AddInterruptQuestIcon(const class ASBInterruptQuestInstance* InInstance, const struct FVector& InLocation, float InRange, const struct FVector2D& InAreaSize)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WholeMapIcons_C", "AddInterruptQuestIcon");

	Params::WholeMapIcons_C_AddInterruptQuestIcon Parms{};

	Parms.InInstance = InInstance;
	Parms.InLocation = std::move(InLocation);
	Parms.InRange = InRange;
	Parms.InAreaSize = std::move(InAreaSize);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WholeMapIcons.WholeMapIcons_C.AddBuddyIcon
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASBEnemyCharacter*                InActor                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USBMapIcon*                       ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class USBMapIcon* UWholeMapIcons_C::AddBuddyIcon(class ASBEnemyCharacter* InActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WholeMapIcons_C", "AddBuddyIcon");

	Params::WholeMapIcons_C_AddBuddyIcon Parms{};

	Parms.InActor = InActor;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WholeMapIcons.WholeMapIcons_C.OnCreateRaidIcon
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBLocationInfo                  LocationInfo                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FVector                          InLocation                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWholeMapIcons_C::OnCreateRaidIcon(const struct FSBLocationInfo& LocationInfo, const struct FVector& InLocation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WholeMapIcons_C", "OnCreateRaidIcon");

	Params::WholeMapIcons_C_OnCreateRaidIcon Parms{};

	Parms.LocationInfo = std::move(LocationInfo);
	Parms.InLocation = std::move(InLocation);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WholeMapIcons.WholeMapIcons_C.OnCreateDungeonIcon
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBLocationInfo                  LocationInfo                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FVector                          InLocation                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWholeMapIcons_C::OnCreateDungeonIcon(const struct FSBLocationInfo& LocationInfo, const struct FVector& InLocation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WholeMapIcons_C", "OnCreateDungeonIcon");

	Params::WholeMapIcons_C_OnCreateDungeonIcon Parms{};

	Parms.LocationInfo = std::move(LocationInfo);
	Parms.InLocation = std::move(InLocation);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WholeMapIcons.WholeMapIcons_C.AddNamedEnemyIcon
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASBEnemyCharacter*                InActor                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USBMapIcon*                       ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class USBMapIcon* UWholeMapIcons_C::AddNamedEnemyIcon(class ASBEnemyCharacter* InActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WholeMapIcons_C", "AddNamedEnemyIcon");

	Params::WholeMapIcons_C_AddNamedEnemyIcon Parms{};

	Parms.InActor = InActor;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WholeMapIcons.WholeMapIcons_C.OnCreatePublicDungeonIcon
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBLocationInfo                  LocationInfo                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FName                             RowName                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          InLocation                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWholeMapIcons_C::OnCreatePublicDungeonIcon(const struct FSBLocationInfo& LocationInfo, const class FName& RowName, const struct FVector& InLocation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WholeMapIcons_C", "OnCreatePublicDungeonIcon");

	Params::WholeMapIcons_C_OnCreatePublicDungeonIcon Parms{};

	Parms.LocationInfo = std::move(LocationInfo);
	Parms.RowName = RowName;
	Parms.InLocation = std::move(InLocation);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WholeMapIcons.WholeMapIcons_C.OnCreateQuestChallenge
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBMiniMapIconType                      IconType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          InLocation                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWholeMapIcons_C::OnCreateQuestChallenge(ESBMiniMapIconType IconType, const struct FVector& InLocation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WholeMapIcons_C", "OnCreateQuestChallenge");

	Params::WholeMapIcons_C_OnCreateQuestChallenge Parms{};

	Parms.IconType = IconType;
	Parms.InLocation = std::move(InLocation);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WholeMapIcons.WholeMapIcons_C.OnCreateQuestNPCIcon
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   QuestID                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EQuestIconType                          QuestType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EQuestCategory2                         QuestCategory                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Location                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWholeMapIcons_C::OnCreateQuestNPCIcon(int32 QuestID, EQuestIconType QuestType, EQuestCategory2 QuestCategory, const struct FVector& Location)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WholeMapIcons_C", "OnCreateQuestNPCIcon");

	Params::WholeMapIcons_C_OnCreateQuestNPCIcon Parms{};

	Parms.QuestID = QuestID;
	Parms.QuestType = QuestType;
	Parms.QuestCategory = QuestCategory;
	Parms.Location = std::move(Location);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WholeMapIcons.WholeMapIcons_C.OnCreateWarpPointDungeonIcon
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           LevelName                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                           PortalName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWholeMapIcons_C::OnCreateWarpPointDungeonIcon(const class FString& LevelName, const class FString& PortalName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WholeMapIcons_C", "OnCreateWarpPointDungeonIcon");

	Params::WholeMapIcons_C_OnCreateWarpPointDungeonIcon Parms{};

	Parms.LevelName = std::move(LevelName);
	Parms.PortalName = std::move(PortalName);

	UObject::ProcessEvent(Func, &Parms);
}

}

