#pragma once

 

// Package: LibraryMenu_Achievement

#include "Basic.hpp"

#include "LibraryMenu_Achievement_classes.hpp"
#include "LibraryMenu_Achievement_parameters.hpp"


namespace SDK
{

// Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.UpdateNewIcon__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   MenuButtonListId                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibraryMenu_Achievement_C::UpdateNewIcon__DelegateSignature(int32 MenuButtonListId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Achievement_C", "UpdateNewIcon__DelegateSignature");

	Params::LibraryMenu_Achievement_C_UpdateNewIcon__DelegateSignature Parms{};

	Parms.MenuButtonListId = MenuButtonListId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.ExecuteUbergraph_LibraryMenu_Achievement
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibraryMenu_Achievement_C::ExecuteUbergraph_LibraryMenu_Achievement(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Achievement_C", "ExecuteUbergraph_LibraryMenu_Achievement");

	Params::LibraryMenu_Achievement_C_ExecuteUbergraph_LibraryMenu_Achievement Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.BndEvt__LibraryMenu_Achievement_LibraryMenu_AchievementDetails_K2Node_ComponentBoundEvent_9_OnClicked_AchievementRewardsBtn__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// TArray<struct FSBMailData>              OutRewardsData                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<int32>                           OutRewardsIds                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ULibraryMenu_Achievement_C::BndEvt__LibraryMenu_Achievement_LibraryMenu_AchievementDetails_K2Node_ComponentBoundEvent_9_OnClicked_AchievementRewardsBtn__DelegateSignature(TArray<struct FSBMailData>& OutRewardsData, TArray<int32>& OutRewardsIds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Achievement_C", "BndEvt__LibraryMenu_Achievement_LibraryMenu_AchievementDetails_K2Node_ComponentBoundEvent_9_OnClicked_AchievementRewardsBtn__DelegateSignature");

	Params::LibraryMenu_Achievement_C_BndEvt__LibraryMenu_Achievement_LibraryMenu_AchievementDetails_K2Node_ComponentBoundEvent_9_OnClicked_AchievementRewardsBtn__DelegateSignature Parms{};

	Parms.OutRewardsData = std::move(OutRewardsData);
	Parms.OutRewardsIds = std::move(OutRewardsIds);

	UObject::ProcessEvent(Func, &Parms);

	OutRewardsData = std::move(Parms.OutRewardsData);
	OutRewardsIds = std::move(Parms.OutRewardsIds);
}


// Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.BndEvt__LibraryMenu_Achievement_LibraryMenu_AchievementDetails_K2Node_ComponentBoundEvent_4_OnGetRewardItem__DelegateSignature
// (BlueprintEvent)

void ULibraryMenu_Achievement_C::BndEvt__LibraryMenu_Achievement_LibraryMenu_AchievementDetails_K2Node_ComponentBoundEvent_4_OnGetRewardItem__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Achievement_C", "BndEvt__LibraryMenu_Achievement_LibraryMenu_AchievementDetails_K2Node_ComponentBoundEvent_4_OnGetRewardItem__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.BndEvt__LibraryMenu_Achievement_GetRewardBtn_K2Node_ComponentBoundEvent_8_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void ULibraryMenu_Achievement_C::BndEvt__LibraryMenu_Achievement_GetRewardBtn_K2Node_ComponentBoundEvent_8_OnButtonPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Achievement_C", "BndEvt__LibraryMenu_Achievement_GetRewardBtn_K2Node_ComponentBoundEvent_8_OnButtonPressedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.BndEvt__LibraryMenu_Achievement_GetRewardBtn_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void ULibraryMenu_Achievement_C::BndEvt__LibraryMenu_Achievement_GetRewardBtn_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Achievement_C", "BndEvt__LibraryMenu_Achievement_GetRewardBtn_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.BndEvt__LibraryMenu_Achievement_GetRewardBtn_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void ULibraryMenu_Achievement_C::BndEvt__LibraryMenu_Achievement_GetRewardBtn_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Achievement_C", "BndEvt__LibraryMenu_Achievement_GetRewardBtn_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.BndEvt__LibraryMenu_Achievement_CategoryList_Type1_K2Node_ComponentBoundEvent_5_CategoryChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                                   ItemIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibraryMenu_Achievement_C::BndEvt__LibraryMenu_Achievement_CategoryList_Type1_K2Node_ComponentBoundEvent_5_CategoryChanged__DelegateSignature(int32 ItemIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Achievement_C", "BndEvt__LibraryMenu_Achievement_CategoryList_Type1_K2Node_ComponentBoundEvent_5_CategoryChanged__DelegateSignature");

	Params::LibraryMenu_Achievement_C_BndEvt__LibraryMenu_Achievement_CategoryList_Type1_K2Node_ComponentBoundEvent_5_CategoryChanged__DelegateSignature Parms{};

	Parms.ItemIndex = ItemIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.OnCloseDetailMenu
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMG_ProductDetailMenu_C*         Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibraryMenu_Achievement_C::OnCloseDetailMenu(class UUMG_ProductDetailMenu_C* Sender)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Achievement_C", "OnCloseDetailMenu");

	Params::LibraryMenu_Achievement_C_OnCloseDetailMenu Parms{};

	Parms.Sender = Sender;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.BndEvt__LibraryMenu_Achievement_LibraryMenu_AchievementDetails_K2Node_ComponentBoundEvent_0_OnClickRewardIcon__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FSBMasterReward                  InMasterReward                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void ULibraryMenu_Achievement_C::BndEvt__LibraryMenu_Achievement_LibraryMenu_AchievementDetails_K2Node_ComponentBoundEvent_0_OnClickRewardIcon__DelegateSignature(const struct FSBMasterReward& InMasterReward)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Achievement_C", "BndEvt__LibraryMenu_Achievement_LibraryMenu_AchievementDetails_K2Node_ComponentBoundEvent_0_OnClickRewardIcon__DelegateSignature");

	Params::LibraryMenu_Achievement_C_BndEvt__LibraryMenu_Achievement_LibraryMenu_AchievementDetails_K2Node_ComponentBoundEvent_0_OnClickRewardIcon__DelegateSignature Parms{};

	Parms.InMasterReward = std::move(InMasterReward);

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.BndEvt__LibraryMenu_Achievement_LibraryMenu_AchievementDetails_K2Node_ComponentBoundEvent_6_OnSetAchievement__DelegateSignature
// (BlueprintEvent)

void ULibraryMenu_Achievement_C::BndEvt__LibraryMenu_Achievement_LibraryMenu_AchievementDetails_K2Node_ComponentBoundEvent_6_OnSetAchievement__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Achievement_C", "BndEvt__LibraryMenu_Achievement_LibraryMenu_AchievementDetails_K2Node_ComponentBoundEvent_6_OnSetAchievement__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.BndEvt__LibraryMenu_Achievement_GetRewardBtn_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void ULibraryMenu_Achievement_C::BndEvt__LibraryMenu_Achievement_GetRewardBtn_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Achievement_C", "BndEvt__LibraryMenu_Achievement_GetRewardBtn_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.MailListAttachmentAcceptResult_CloseEvent
// (BlueprintCallable, BlueprintEvent)

void ULibraryMenu_Achievement_C::MailListAttachmentAcceptResult_CloseEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Achievement_C", "MailListAttachmentAcceptResult_CloseEvent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.OnGetRewardItemEvent
// (BlueprintCallable, BlueprintEvent)

void ULibraryMenu_Achievement_C::OnGetRewardItemEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Achievement_C", "OnGetRewardItemEvent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.AttachmentListWindow_Close
// (BlueprintCallable, BlueprintEvent)

void ULibraryMenu_Achievement_C::AttachmentListWindow_Close()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Achievement_C", "AttachmentListWindow_Close");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.OnGetAchievementRewardsDelegate_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Result                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   RetCode                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSBAchievementRewardData         AchievementRewardData                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)

void ULibraryMenu_Achievement_C::OnGetAchievementRewardsDelegate_Event(const bool Result, const int32 RetCode, const struct FSBAchievementRewardData& AchievementRewardData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Achievement_C", "OnGetAchievementRewardsDelegate_Event");

	Params::LibraryMenu_Achievement_C_OnGetAchievementRewardsDelegate_Event Parms{};

	Parms.Result = Result;
	Parms.RetCode = RetCode;
	Parms.AchievementRewardData = std::move(AchievementRewardData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.RequestAPI_GetAchievementRewards
// (BlueprintCallable, BlueprintEvent)

void ULibraryMenu_Achievement_C::RequestAPI_GetAchievementRewards()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Achievement_C", "RequestAPI_GetAchievementRewards");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.CallErrorMessage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   RetCode                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibraryMenu_Achievement_C::CallErrorMessage(int32 RetCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Achievement_C", "CallErrorMessage");

	Params::LibraryMenu_Achievement_C_CallErrorMessage Parms{};

	Parms.RetCode = RetCode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.OnLoadAchievementDataDelegate_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Result                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   RetCode                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibraryMenu_Achievement_C::OnLoadAchievementDataDelegate_Event(const bool Result, const int32 RetCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Achievement_C", "OnLoadAchievementDataDelegate_Event");

	Params::LibraryMenu_Achievement_C_OnLoadAchievementDataDelegate_Event Parms{};

	Parms.Result = Result;
	Parms.RetCode = RetCode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.RequestAPI_LoadAchievementData
// (BlueprintCallable, BlueprintEvent)

void ULibraryMenu_Achievement_C::RequestAPI_LoadAchievementData()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Achievement_C", "RequestAPI_LoadAchievementData");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.BndEvt__ComboBox_K2Node_ComponentBoundEvent_3_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                           SelectedItem                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// ESelectInfo                             SelectionType                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibraryMenu_Achievement_C::BndEvt__ComboBox_K2Node_ComponentBoundEvent_3_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Achievement_C", "BndEvt__ComboBox_K2Node_ComponentBoundEvent_3_OnSelectionChangedEvent__DelegateSignature");

	Params::LibraryMenu_Achievement_C_BndEvt__ComboBox_K2Node_ComponentBoundEvent_3_OnSelectionChangedEvent__DelegateSignature Parms{};

	Parms.SelectedItem = std::move(SelectedItem);
	Parms.SelectionType = SelectionType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.OnSaveAchievementSelectedDelegate_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Result                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULibraryMenu_Achievement_C::OnSaveAchievementSelectedDelegate_Event(const bool Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Achievement_C", "OnSaveAchievementSelectedDelegate_Event");

	Params::LibraryMenu_Achievement_C_OnSaveAchievementSelectedDelegate_Event Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.OnLoadAchievementDelegate
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Result                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FSBAchievementInfo>       AchievementList                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ULibraryMenu_Achievement_C::OnLoadAchievementDelegate(const bool Result, const TArray<struct FSBAchievementInfo>& AchievementList)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Achievement_C", "OnLoadAchievementDelegate");

	Params::LibraryMenu_Achievement_C_OnLoadAchievementDelegate Parms{};

	Parms.Result = Result;
	Parms.AchievementList = std::move(AchievementList);

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void ULibraryMenu_Achievement_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Achievement_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void ULibraryMenu_Achievement_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Achievement_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)

void ULibraryMenu_Achievement_C::Initialize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Achievement_C", "Initialize");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.Initialize_RankProgress
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ULibraryMenu_Achievement_C::Initialize_RankProgress()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Achievement_C", "Initialize_RankProgress");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.Create Category List
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ULibraryMenu_Achievement_C::Create_Category_List()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Achievement_C", "Create Category List");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.CreateItemList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InSelectId                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibraryMenu_Achievement_C::CreateItemList(int32 InSelectId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Achievement_C", "CreateItemList");

	Params::LibraryMenu_Achievement_C_CreateItemList Parms{};

	Parms.InSelectId = InSelectId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.ClickListItem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   ListIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibraryMenu_Achievement_C::ClickListItem(int32 ListIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Achievement_C", "ClickListItem");

	Params::LibraryMenu_Achievement_C_ClickListItem Parms{};

	Parms.ListIndex = ListIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.SetAchievementId
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsChecked                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   ListIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibraryMenu_Achievement_C::SetAchievementId(bool IsChecked, int32 ListIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Achievement_C", "SetAchievementId");

	Params::LibraryMenu_Achievement_C_SetAchievementId Parms{};

	Parms.IsChecked = IsChecked;
	Parms.ListIndex = ListIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.Get Read Achievement Id List
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<int32>                           ReadAchievementIdList                                  (Parm, OutParm)

void ULibraryMenu_Achievement_C::Get_Read_Achievement_Id_List(TArray<int32>* ReadAchievementIdList)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Achievement_C", "Get Read Achievement Id List");

	Params::LibraryMenu_Achievement_C_Get_Read_Achievement_Id_List Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (ReadAchievementIdList != nullptr)
		*ReadAchievementIdList = std::move(Parms.ReadAchievementIdList);
}


// Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.UpdateSelectCategoryNewIcon
// (Public, BlueprintCallable, BlueprintEvent)

void ULibraryMenu_Achievement_C::UpdateSelectCategoryNewIcon()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Achievement_C", "UpdateSelectCategoryNewIcon");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.CheckCategory
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FAchievementMasterData           MasterData                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                                    Result                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULibraryMenu_Achievement_C::CheckCategory(const struct FAchievementMasterData& MasterData, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Achievement_C", "CheckCategory");

	Params::LibraryMenu_Achievement_C_CheckCategory Parms{};

	Parms.MasterData = std::move(MasterData);

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;
}


// Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.On_ComboBox_GenerateWidget_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Item                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* ULibraryMenu_Achievement_C::On_ComboBox_GenerateWidget_0(const class FString& Item)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Achievement_C", "On_ComboBox_GenerateWidget_0");

	Params::LibraryMenu_Achievement_C_On_ComboBox_GenerateWidget_0 Parms{};

	Parms.Item = std::move(Item);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.GetCharacterAchievementData
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   AchievementId                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSBCharacterAchievementDataInfo  Data                                                   (Parm, OutParm, NoDestructor)

void ULibraryMenu_Achievement_C::GetCharacterAchievementData(int32 AchievementId, struct FSBCharacterAchievementDataInfo* Data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Achievement_C", "GetCharacterAchievementData");

	Params::LibraryMenu_Achievement_C_GetCharacterAchievementData Parms{};

	Parms.AchievementId = AchievementId;

	UObject::ProcessEvent(Func, &Parms);

	if (Data != nullptr)
		*Data = std::move(Parms.Data);
}


// Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.SetAchievedDate
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   AchievementId                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDateTime                        InDateTime                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)

void ULibraryMenu_Achievement_C::SetAchievedDate(int32 AchievementId, struct FDateTime& InDateTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Achievement_C", "SetAchievedDate");

	Params::LibraryMenu_Achievement_C_SetAchievedDate Parms{};

	Parms.AchievementId = AchievementId;
	Parms.InDateTime = std::move(InDateTime);

	UObject::ProcessEvent(Func, &Parms);

	InDateTime = std::move(Parms.InDateTime);
}


// Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.GetGroupName
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   InInt                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)

class FString ULibraryMenu_Achievement_C::GetGroupName(int32 InInt)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Achievement_C", "GetGroupName");

	Params::LibraryMenu_Achievement_C_GetGroupName Parms{};

	Parms.InInt = InInt;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.GetLargeCategoryName
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   InInt                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)

class FString ULibraryMenu_Achievement_C::GetLargeCategoryName(int32 InInt)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Achievement_C", "GetLargeCategoryName");

	Params::LibraryMenu_Achievement_C_GetLargeCategoryName Parms{};

	Parms.InInt = InInt;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.GetCategoryID
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   OutLargeCategoryId                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   OutMediumCategoryId                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibraryMenu_Achievement_C::GetCategoryID(int32 Value, int32* OutLargeCategoryId, int32* OutMediumCategoryId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Achievement_C", "GetCategoryID");

	Params::LibraryMenu_Achievement_C_GetCategoryID Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

	if (OutLargeCategoryId != nullptr)
		*OutLargeCategoryId = Parms.OutLargeCategoryId;

	if (OutMediumCategoryId != nullptr)
		*OutMediumCategoryId = Parms.OutMediumCategoryId;
}


// Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.Set Reward Btn
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ULibraryMenu_Achievement_C::Set_Reward_Btn()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Achievement_C", "Set Reward Btn");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.GetAchievementReward
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FSBMailData>              OutMailData                                            (Parm, OutParm)

void ULibraryMenu_Achievement_C::GetAchievementReward(TArray<struct FSBMailData>* OutMailData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Achievement_C", "GetAchievementReward");

	Params::LibraryMenu_Achievement_C_GetAchievementReward Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutMailData != nullptr)
		*OutMailData = std::move(Parms.OutMailData);
}


// Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.CheckAllAchievement
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FAchievementMasterData>   OutItemListInfo                                        (Parm, OutParm)

void ULibraryMenu_Achievement_C::CheckAllAchievement(TArray<struct FAchievementMasterData>* OutItemListInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Achievement_C", "CheckAllAchievement");

	Params::LibraryMenu_Achievement_C_CheckAllAchievement Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutItemListInfo != nullptr)
		*OutItemListInfo = std::move(Parms.OutItemListInfo);
}


// Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.UpdateCharacterAchievementDataInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ULibraryMenu_Achievement_C::UpdateCharacterAchievementDataInfo()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Achievement_C", "UpdateCharacterAchievementDataInfo");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.SetLimitedTime
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                           TermId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                                    OutValue                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULibraryMenu_Achievement_C::SetLimitedTime(const class FString& TermId, bool* OutValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Achievement_C", "SetLimitedTime");

	Params::LibraryMenu_Achievement_C_SetLimitedTime Parms{};

	Parms.TermId = std::move(TermId);

	UObject::ProcessEvent(Func, &Parms);

	if (OutValue != nullptr)
		*OutValue = Parms.OutValue;
}


// Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.GetAchievementComponent
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class USBPlayerAchievementComponent*    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class USBPlayerAchievementComponent* ULibraryMenu_Achievement_C::GetAchievementComponent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Achievement_C", "GetAchievementComponent");

	Params::LibraryMenu_Achievement_C_GetAchievementComponent Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.IsAchievementPossession
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   InFindAchievementId                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   B                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    NewParam                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULibraryMenu_Achievement_C::IsAchievementPossession(const int32 InFindAchievementId, int32 B, bool* NewParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Achievement_C", "IsAchievementPossession");

	Params::LibraryMenu_Achievement_C_IsAchievementPossession Parms{};

	Parms.InFindAchievementId = InFindAchievementId;
	Parms.B = B;

	UObject::ProcessEvent(Func, &Parms);

	if (NewParam != nullptr)
		*NewParam = Parms.NewParam;
}

}

