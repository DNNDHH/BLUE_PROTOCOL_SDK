#pragma once

 

// Package: LibraryMenu_Monster

#include "Basic.hpp"

#include "LibraryMenu_Monster_classes.hpp"
#include "LibraryMenu_Monster_parameters.hpp"


namespace SDK
{

// Function LibraryMenu_Monster.LibraryMenu_Monster_C.AllReadMonster__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibraryMenu_Monster_C::AllReadMonster__DelegateSignature(int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Monster_C", "AllReadMonster__DelegateSignature");

	Params::LibraryMenu_Monster_C_AllReadMonster__DelegateSignature Parms{};

	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_Monster.LibraryMenu_Monster_C.ExecuteUbergraph_LibraryMenu_Monster
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibraryMenu_Monster_C::ExecuteUbergraph_LibraryMenu_Monster(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Monster_C", "ExecuteUbergraph_LibraryMenu_Monster");

	Params::LibraryMenu_Monster_C_ExecuteUbergraph_LibraryMenu_Monster Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_Monster.LibraryMenu_Monster_C.AreaListSelect
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             EnemyId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibraryMenu_Monster_C::AreaListSelect(int32 Param_Index, class FName EnemyId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Monster_C", "AreaListSelect");

	Params::LibraryMenu_Monster_C_AreaListSelect Parms{};

	Parms.Param_Index = Param_Index;
	Parms.EnemyId = EnemyId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_Monster.LibraryMenu_Monster_C.BndEvt__LibraryMenu_Monster_WindowOpenButton_2_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void ULibraryMenu_Monster_C::BndEvt__LibraryMenu_Monster_WindowOpenButton_2_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Monster_C", "BndEvt__LibraryMenu_Monster_WindowOpenButton_2_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_Monster.LibraryMenu_Monster_C.BndEvt__LibraryMenu_Monster_ModelChangeButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void ULibraryMenu_Monster_C::BndEvt__LibraryMenu_Monster_ModelChangeButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Monster_C", "BndEvt__LibraryMenu_Monster_ModelChangeButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_Monster.LibraryMenu_Monster_C.BndEvt__LibraryMenu_Monster_ModelChangeButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void ULibraryMenu_Monster_C::BndEvt__LibraryMenu_Monster_ModelChangeButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Monster_C", "BndEvt__LibraryMenu_Monster_ModelChangeButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_Monster.LibraryMenu_Monster_C.BndEvt__LibraryMenu_Monster_CategoryList_Type1_K2Node_ComponentBoundEvent_2_CategoryChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                                   ItemIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibraryMenu_Monster_C::BndEvt__LibraryMenu_Monster_CategoryList_Type1_K2Node_ComponentBoundEvent_2_CategoryChanged__DelegateSignature(int32 ItemIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Monster_C", "BndEvt__LibraryMenu_Monster_CategoryList_Type1_K2Node_ComponentBoundEvent_2_CategoryChanged__DelegateSignature");

	Params::LibraryMenu_Monster_C_BndEvt__LibraryMenu_Monster_CategoryList_Type1_K2Node_ComponentBoundEvent_2_CategoryChanged__DelegateSignature Parms{};

	Parms.ItemIndex = ItemIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_Monster.LibraryMenu_Monster_C.BndEvt__LibraryMenu_Monster_CmnBack01_K2Node_ComponentBoundEvent_4_EventClicked__DelegateSignature
// (BlueprintEvent)

void ULibraryMenu_Monster_C::BndEvt__LibraryMenu_Monster_CmnBack01_K2Node_ComponentBoundEvent_4_EventClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Monster_C", "BndEvt__LibraryMenu_Monster_CmnBack01_K2Node_ComponentBoundEvent_4_EventClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_Monster.LibraryMenu_Monster_C.AreaListVisibleChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Visible                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULibraryMenu_Monster_C::AreaListVisibleChange(bool Visible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Monster_C", "AreaListVisibleChange");

	Params::LibraryMenu_Monster_C_AreaListVisibleChange Parms{};

	Parms.Visible = Visible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_Monster.LibraryMenu_Monster_C.OnEnemyDataLoaded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Result                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULibraryMenu_Monster_C::OnEnemyDataLoaded(bool Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Monster_C", "OnEnemyDataLoaded");

	Params::LibraryMenu_Monster_C_OnEnemyDataLoaded Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_Monster.LibraryMenu_Monster_C.UnBindArealistBtn
// (BlueprintCallable, BlueprintEvent)

void ULibraryMenu_Monster_C::UnBindArealistBtn()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Monster_C", "UnBindArealistBtn");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_Monster.LibraryMenu_Monster_C.PressedAreaList
// (BlueprintCallable, BlueprintEvent)

void ULibraryMenu_Monster_C::PressedAreaList()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Monster_C", "PressedAreaList");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_Monster.LibraryMenu_Monster_C.BndEvt__LibraryMenu_Monster_ButtonFullScreen_MonsterDetails_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void ULibraryMenu_Monster_C::BndEvt__LibraryMenu_Monster_ButtonFullScreen_MonsterDetails_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Monster_C", "BndEvt__LibraryMenu_Monster_ButtonFullScreen_MonsterDetails_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_Monster.LibraryMenu_Monster_C.OnClosePopup
// (BlueprintCallable, BlueprintEvent)

void ULibraryMenu_Monster_C::OnClosePopup()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Monster_C", "OnClosePopup");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_Monster.LibraryMenu_Monster_C.Close_ModelView
// (BlueprintCallable, BlueprintEvent)

void ULibraryMenu_Monster_C::Close_ModelView()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Monster_C", "Close_ModelView");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_Monster.LibraryMenu_Monster_C.BndEvt__LibraryMenu_Monster_ButtonFullScreen_ModelView_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void ULibraryMenu_Monster_C::BndEvt__LibraryMenu_Monster_ButtonFullScreen_ModelView_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Monster_C", "BndEvt__LibraryMenu_Monster_ButtonFullScreen_ModelView_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_Monster.LibraryMenu_Monster_C.Esc_ModelView
// (BlueprintCallable, BlueprintEvent)

void ULibraryMenu_Monster_C::Esc_ModelView()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Monster_C", "Esc_ModelView");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_Monster.LibraryMenu_Monster_C.BndEvt__LibraryMenu_Monster_WindowOpenButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void ULibraryMenu_Monster_C::BndEvt__LibraryMenu_Monster_WindowOpenButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Monster_C", "BndEvt__LibraryMenu_Monster_WindowOpenButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_Monster.LibraryMenu_Monster_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void ULibraryMenu_Monster_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Monster_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_Monster.LibraryMenu_Monster_C.BndEvt__LibraryMenu_Search_K2Node_ComponentBoundEvent_19_OnTextChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FText                             NewParam                                               (BlueprintVisible, BlueprintReadOnly, Parm)

void ULibraryMenu_Monster_C::BndEvt__LibraryMenu_Search_K2Node_ComponentBoundEvent_19_OnTextChange__DelegateSignature(const class FText& NewParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Monster_C", "BndEvt__LibraryMenu_Search_K2Node_ComponentBoundEvent_19_OnTextChange__DelegateSignature");

	Params::LibraryMenu_Monster_C_BndEvt__LibraryMenu_Search_K2Node_ComponentBoundEvent_19_OnTextChange__DelegateSignature Parms{};

	Parms.NewParam = std::move(NewParam);

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_Monster.LibraryMenu_Monster_C.ImageVisibleEvent
// (BlueprintCallable, BlueprintEvent)

void ULibraryMenu_Monster_C::ImageVisibleEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Monster_C", "ImageVisibleEvent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_Monster.LibraryMenu_Monster_C.UpdateEnemyModel
// (BlueprintCallable, BlueprintEvent)

void ULibraryMenu_Monster_C::UpdateEnemyModel()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Monster_C", "UpdateEnemyModel");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_Monster.LibraryMenu_Monster_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*                 Animation                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibraryMenu_Monster_C::OnAnimationFinished(const class UWidgetAnimation* Animation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Monster_C", "OnAnimationFinished");

	Params::LibraryMenu_Monster_C_OnAnimationFinished Parms{};

	Parms.Animation = Animation;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_Monster.LibraryMenu_Monster_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibraryMenu_Monster_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Monster_C", "Tick");

	Params::LibraryMenu_Monster_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_Monster.LibraryMenu_Monster_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void ULibraryMenu_Monster_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Monster_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_Monster.LibraryMenu_Monster_C.OnModelLoadedAllMipFunc
// (BlueprintCallable, BlueprintEvent)

void ULibraryMenu_Monster_C::OnModelLoadedAllMipFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Monster_C", "OnModelLoadedAllMipFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_Monster.LibraryMenu_Monster_C.BndEvt__LibraryMenu_Monster_ModelChangeButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void ULibraryMenu_Monster_C::BndEvt__LibraryMenu_Monster_ModelChangeButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Monster_C", "BndEvt__LibraryMenu_Monster_ModelChangeButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_Monster.LibraryMenu_Monster_C.ModelLoadRequest
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           EnemyCharacterId                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// ESBLibraryEnemyViewSetting              ViewSetting                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESBLibraryEnemyWeaponSetting            WeaponSetting                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibraryMenu_Monster_C::ModelLoadRequest(const class FString& EnemyCharacterId, ESBLibraryEnemyViewSetting ViewSetting, ESBLibraryEnemyWeaponSetting WeaponSetting)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Monster_C", "ModelLoadRequest");

	Params::LibraryMenu_Monster_C_ModelLoadRequest Parms{};

	Parms.EnemyCharacterId = std::move(EnemyCharacterId);
	Parms.ViewSetting = ViewSetting;
	Parms.WeaponSetting = WeaponSetting;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_Monster.LibraryMenu_Monster_C.SetModelVisibility
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Visible                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULibraryMenu_Monster_C::SetModelVisibility(bool Visible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Monster_C", "SetModelVisibility");

	Params::LibraryMenu_Monster_C_SetModelVisibility Parms{};

	Parms.Visible = Visible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_Monster.LibraryMenu_Monster_C.SetModelControllEnabled
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Enable                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULibraryMenu_Monster_C::SetModelControllEnabled(bool Enable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Monster_C", "SetModelControllEnabled");

	Params::LibraryMenu_Monster_C_SetModelControllEnabled Parms{};

	Parms.Enable = Enable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_Monster.LibraryMenu_Monster_C.FinalizeCaptureStudio
// (BlueprintCallable, BlueprintEvent)

void ULibraryMenu_Monster_C::FinalizeCaptureStudio()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Monster_C", "FinalizeCaptureStudio");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_Monster.LibraryMenu_Monster_C.OnModelLoadComplete
// (BlueprintCallable, BlueprintEvent)

void ULibraryMenu_Monster_C::OnModelLoadComplete()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Monster_C", "OnModelLoadComplete");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_Monster.LibraryMenu_Monster_C.InitializeCaptureStudio
// (BlueprintCallable, BlueprintEvent)

void ULibraryMenu_Monster_C::InitializeCaptureStudio()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Monster_C", "InitializeCaptureStudio");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_Monster.LibraryMenu_Monster_C.ResetMouseCursorTypeToDefaultRequest
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ULibraryMenu_Monster_C::ResetMouseCursorTypeToDefaultRequest()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Monster_C", "ResetMouseCursorTypeToDefaultRequest");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_Monster.LibraryMenu_Monster_C.OnSubMenuUpdate
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   MainPage                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   SubPage                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibraryMenu_Monster_C::OnSubMenuUpdate(int32 MainPage, int32 SubPage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Monster_C", "OnSubMenuUpdate");

	Params::LibraryMenu_Monster_C_OnSubMenuUpdate Parms{};

	Parms.MainPage = MainPage;
	Parms.SubPage = SubPage;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_Monster.LibraryMenu_Monster_C.OnSameMenuBookmarkAccessNew
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           InBookMarkType                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void ULibraryMenu_Monster_C::OnSameMenuBookmarkAccessNew(const class FString& InBookMarkType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Monster_C", "OnSameMenuBookmarkAccessNew");

	Params::LibraryMenu_Monster_C_OnSameMenuBookmarkAccessNew Parms{};

	Parms.InBookMarkType = std::move(InBookMarkType);

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_Monster.LibraryMenu_Monster_C.OnRMShopClosed
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ULibraryMenu_Monster_C::OnRMShopClosed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Monster_C", "OnRMShopClosed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_Monster.LibraryMenu_Monster_C.OnParentTerm
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ULibraryMenu_Monster_C::OnParentTerm()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Monster_C", "OnParentTerm");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_Monster.LibraryMenu_Monster_C.CreateCategoryList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ULibraryMenu_Monster_C::CreateCategoryList()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Monster_C", "CreateCategoryList");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_Monster.LibraryMenu_Monster_C.IsAllRead
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ULibraryMenu_Monster_C::IsAllRead()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Monster_C", "IsAllRead");

	Params::LibraryMenu_Monster_C_IsAllRead Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function LibraryMenu_Monster.LibraryMenu_Monster_C.IsReadCategory
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBTextTableHash                 ID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FSBTextTableHash                 RaceId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FSBTextTableHash                 ReadId                                                 (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
// bool                                    IsRead                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULibraryMenu_Monster_C::IsReadCategory(const struct FSBTextTableHash& ID, const struct FSBTextTableHash& RaceId, struct FSBTextTableHash* ReadId, bool* IsRead)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Monster_C", "IsReadCategory");

	Params::LibraryMenu_Monster_C_IsReadCategory Parms{};

	Parms.ID = std::move(ID);
	Parms.RaceId = std::move(RaceId);

	UObject::ProcessEvent(Func, &Parms);

	if (ReadId != nullptr)
		*ReadId = std::move(Parms.ReadId);

	if (IsRead != nullptr)
		*IsRead = Parms.IsRead;
}


// Function LibraryMenu_Monster.LibraryMenu_Monster_C.SaveEnemyReadId
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             EnemyId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    SaveAdd                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULibraryMenu_Monster_C::SaveEnemyReadId(class FName EnemyId, bool* SaveAdd)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Monster_C", "SaveEnemyReadId");

	Params::LibraryMenu_Monster_C_SaveEnemyReadId Parms{};

	Parms.EnemyId = EnemyId;

	UObject::ProcessEvent(Func, &Parms);

	if (SaveAdd != nullptr)
		*SaveAdd = Parms.SaveAdd;
}


// Function LibraryMenu_Monster.LibraryMenu_Monster_C.CreateAppearanceList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ULibraryMenu_Monster_C::CreateAppearanceList()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Monster_C", "CreateAppearanceList");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_Monster.LibraryMenu_Monster_C.OnAppearanceListClick
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   ListIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibraryMenu_Monster_C::OnAppearanceListClick(int32 ListIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Monster_C", "OnAppearanceListClick");

	Params::LibraryMenu_Monster_C_OnAppearanceListClick Parms{};

	Parms.ListIndex = ListIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_Monster.LibraryMenu_Monster_C.UpdateSearchVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             SearchWord                                             (BlueprintVisible, BlueprintReadOnly, Parm)

void ULibraryMenu_Monster_C::UpdateSearchVisibility(const class FText& SearchWord)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Monster_C", "UpdateSearchVisibility");

	Params::LibraryMenu_Monster_C_UpdateSearchVisibility Parms{};

	Parms.SearchWord = std::move(SearchWord);

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_Monster.LibraryMenu_Monster_C.ModelPartsChange
// (Public, BlueprintCallable, BlueprintEvent)

void ULibraryMenu_Monster_C::ModelPartsChange()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Monster_C", "ModelPartsChange");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_Monster.LibraryMenu_Monster_C.BossFlagCheck
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             EnemyId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Boss                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    Unique                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULibraryMenu_Monster_C::BossFlagCheck(class FName EnemyId, bool* Boss, bool* Unique)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Monster_C", "BossFlagCheck");

	Params::LibraryMenu_Monster_C_BossFlagCheck Parms{};

	Parms.EnemyId = EnemyId;

	UObject::ProcessEvent(Func, &Parms);

	if (Boss != nullptr)
		*Boss = Parms.Boss;

	if (Unique != nullptr)
		*Unique = Parms.Unique;
}


// Function LibraryMenu_Monster.LibraryMenu_Monster_C.UpdateCategoryListMark
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ULibraryMenu_Monster_C::UpdateCategoryListMark()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Monster_C", "UpdateCategoryListMark");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_Monster.LibraryMenu_Monster_C.ChangeDetailEnemyId
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             EnemyId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibraryMenu_Monster_C::ChangeDetailEnemyId(class FName EnemyId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Monster_C", "ChangeDetailEnemyId");

	Params::LibraryMenu_Monster_C_ChangeDetailEnemyId Parms{};

	Parms.EnemyId = EnemyId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_Monster.LibraryMenu_Monster_C.TermRequest
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESubMenuTermReason                      InReason                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESubMenuTermRequestReply                ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESubMenuTermRequestReply ULibraryMenu_Monster_C::TermRequest(const ESubMenuTermReason InReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Monster_C", "TermRequest");

	Params::LibraryMenu_Monster_C_TermRequest Parms{};

	Parms.InReason = InReason;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

