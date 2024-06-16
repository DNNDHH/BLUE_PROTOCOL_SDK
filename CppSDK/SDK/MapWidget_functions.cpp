#pragma once

 

// Package: MapWidget

#include "Basic.hpp"

#include "MapWidget_classes.hpp"
#include "MapWidget_parameters.hpp"


namespace SDK
{

// Function MapWidget.MapWidget_C.OnClose__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UMapWidget_C::OnClose__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_C", "OnClose__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MapWidget.MapWidget_C.ExecuteUbergraph_MapWidget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMapWidget_C::ExecuteUbergraph_MapWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_C", "ExecuteUbergraph_MapWidget");

	Params::MapWidget_C_ExecuteUbergraph_MapWidget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget.MapWidget_C.OnQuestDetailForMapChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bIsOpen                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMapWidget_C::OnQuestDetailForMapChanged(bool bIsOpen)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_C", "OnQuestDetailForMapChanged");

	Params::MapWidget_C_OnQuestDetailForMapChanged Parms{};

	Parms.bIsOpen = bIsOpen;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget.MapWidget_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMapWidget_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_C", "Tick");

	Params::MapWidget_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget.MapWidget_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMapWidget_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_C", "PreConstruct");

	Params::MapWidget_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget.MapWidget_C.UpdateBookmarkStatusButton
// (BlueprintCallable, BlueprintEvent)

void UMapWidget_C::UpdateBookmarkStatusButton()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_C", "UpdateBookmarkStatusButton");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MapWidget.MapWidget_C.BookmarkUpdateRequest
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UMapWidget_C::BookmarkUpdateRequest()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_C", "BookmarkUpdateRequest");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MapWidget.MapWidget_C.ResetMouseCursorTypeToDefaultRequest
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UMapWidget_C::ResetMouseCursorTypeToDefaultRequest()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_C", "ResetMouseCursorTypeToDefaultRequest");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MapWidget.MapWidget_C.UpdateMarkerPin
// (BlueprintCallable, BlueprintEvent)

void UMapWidget_C::UpdateMarkerPin()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_C", "UpdateMarkerPin");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MapWidget.MapWidget_C.OnPinBoxPinIconSelected_����
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMapPinType                             InSelectedPinType                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMapWidget_C::OnPinBoxPinIconSelected_____(EMapPinType InSelectedPinType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_C", "OnPinBoxPinIconSelected_����");

	Params::MapWidget_C_OnPinBoxPinIconSelected_____ Parms{};

	Parms.InSelectedPinType = InSelectedPinType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget.MapWidget_C.BndEvt__WarpBox_K2Node_ComponentBoundEvent_2_OnListBoxClosed__DelegateSignature
// (BlueprintEvent)

void UMapWidget_C::BndEvt__WarpBox_K2Node_ComponentBoundEvent_2_OnListBoxClosed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_C", "BndEvt__WarpBox_K2Node_ComponentBoundEvent_2_OnListBoxClosed__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MapWidget.MapWidget_C.BndEvt__PinBox_K2Node_ComponentBoundEvent_1_OnListBoxClosed__DelegateSignature
// (BlueprintEvent)

void UMapWidget_C::BndEvt__PinBox_K2Node_ComponentBoundEvent_1_OnListBoxClosed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_C", "BndEvt__PinBox_K2Node_ComponentBoundEvent_1_OnListBoxClosed__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MapWidget.MapWidget_C.OnEndSavePinInfo_����
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsResultSuccess                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// ESBMapErrorCode                         ErrorCode                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMapWidget_C::OnEndSavePinInfo_____(bool IsResultSuccess, ESBMapErrorCode ErrorCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_C", "OnEndSavePinInfo_����");

	Params::MapWidget_C_OnEndSavePinInfo_____ Parms{};

	Parms.IsResultSuccess = IsResultSuccess;
	Parms.ErrorCode = ErrorCode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget.MapWidget_C.OnWarpPointIconPressed_����
// (BlueprintCallable, BlueprintEvent)

void UMapWidget_C::OnWarpPointIconPressed_____()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_C", "OnWarpPointIconPressed_����");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MapWidget.MapWidget_C.BndEvt__WarpBox_K2Node_ComponentBoundEvent_10_OnListBoxOpened__DelegateSignature
// (BlueprintEvent)

void UMapWidget_C::BndEvt__WarpBox_K2Node_ComponentBoundEvent_10_OnListBoxOpened__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_C", "BndEvt__WarpBox_K2Node_ComponentBoundEvent_10_OnListBoxOpened__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MapWidget.MapWidget_C.BndEvt__PinBox_K2Node_ComponentBoundEvent_4_OnListBoxOpened__DelegateSignature
// (BlueprintEvent)

void UMapWidget_C::BndEvt__PinBox_K2Node_ComponentBoundEvent_4_OnListBoxOpened__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_C", "BndEvt__PinBox_K2Node_ComponentBoundEvent_4_OnListBoxOpened__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MapWidget.MapWidget_C.ResetMouseCursorTypeToDefault
// (BlueprintCallable, BlueprintEvent)

void UMapWidget_C::ResetMouseCursorTypeToDefault()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_C", "ResetMouseCursorTypeToDefault");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MapWidget.MapWidget_C.ChangeMouseCursorType
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMapPinType                             InMapPinType                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMapWidget_C::ChangeMouseCursorType(EMapPinType InMapPinType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_C", "ChangeMouseCursorType");

	Params::MapWidget_C_ChangeMouseCursorType Parms{};

	Parms.InMapPinType = InMapPinType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget.MapWidget_C.ResetInputModeToMapWidget
// (BlueprintCallable, BlueprintEvent)

void UMapWidget_C::ResetInputModeToMapWidget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_C", "ResetInputModeToMapWidget");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MapWidget.MapWidget_C.OnWarpRequestAccepted_����
// (BlueprintCallable, BlueprintEvent)

void UMapWidget_C::OnWarpRequestAccepted_____()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_C", "OnWarpRequestAccepted_����");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MapWidget.MapWidget_C.BndEvt__WarpBox_K2Node_ComponentBoundEvent_96_OnItemSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                           InSelectedItemName                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int32                                   InSelectedItemId                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMapWidget_C::BndEvt__WarpBox_K2Node_ComponentBoundEvent_96_OnItemSelected__DelegateSignature(const class FString& InSelectedItemName, int32 InSelectedItemId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_C", "BndEvt__WarpBox_K2Node_ComponentBoundEvent_96_OnItemSelected__DelegateSignature");

	Params::MapWidget_C_BndEvt__WarpBox_K2Node_ComponentBoundEvent_96_OnItemSelected__DelegateSignature Parms{};

	Parms.InSelectedItemName = std::move(InSelectedItemName);
	Parms.InSelectedItemId = InSelectedItemId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget.MapWidget_C.BndEvt__PinBox_K2Node_ComponentBoundEvent_88_OnItemSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                           InSelectedItemName                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int32                                   InSelectedItemId                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMapWidget_C::BndEvt__PinBox_K2Node_ComponentBoundEvent_88_OnItemSelected__DelegateSignature(const class FString& InSelectedItemName, int32 InSelectedItemId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_C", "BndEvt__PinBox_K2Node_ComponentBoundEvent_88_OnItemSelected__DelegateSignature");

	Params::MapWidget_C_BndEvt__PinBox_K2Node_ComponentBoundEvent_88_OnItemSelected__DelegateSignature Parms{};

	Parms.InSelectedItemName = std::move(InSelectedItemName);
	Parms.InSelectedItemId = InSelectedItemId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget.MapWidget_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*                 Animation                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMapWidget_C::OnAnimationFinished(const class UWidgetAnimation* Animation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_C", "OnAnimationFinished");

	Params::MapWidget_C_OnAnimationFinished Parms{};

	Parms.Animation = Animation;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget.MapWidget_C.DoChangeMapTypeSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_IsWorldMap                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMapWidget_C::DoChangeMapTypeSelected(bool Param_IsWorldMap)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_C", "DoChangeMapTypeSelected");

	Params::MapWidget_C_DoChangeMapTypeSelected Parms{};

	Parms.Param_IsWorldMap = Param_IsWorldMap;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget.MapWidget_C.BndEvt__MenuItemButtonList_K2Node_ComponentBoundEvent_67_OnClick__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                                   ButtonId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMapWidget_C::BndEvt__MenuItemButtonList_K2Node_ComponentBoundEvent_67_OnClick__DelegateSignature(int32 ButtonId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_C", "BndEvt__MenuItemButtonList_K2Node_ComponentBoundEvent_67_OnClick__DelegateSignature");

	Params::MapWidget_C_BndEvt__MenuItemButtonList_K2Node_ComponentBoundEvent_67_OnClick__DelegateSignature Parms{};

	Parms.ButtonId = ButtonId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget.MapWidget_C.EndShowErrorMessage
// (BlueprintCallable, BlueprintEvent)

void UMapWidget_C::EndShowErrorMessage()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_C", "EndShowErrorMessage");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MapWidget.MapWidget_C.StartShowErrorMessage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InMessageTextId                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMapWidget_C::StartShowErrorMessage(int32 InMessageTextId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_C", "StartShowErrorMessage");

	Params::MapWidget_C_StartShowErrorMessage Parms{};

	Parms.InMessageTextId = InMessageTextId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget.MapWidget_C.OnPinnedPinClicked_����
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMapWidget_MapPinnedPin_C*        InPinnedPin                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMapWidget_C::OnPinnedPinClicked_____(class UMapWidget_MapPinnedPin_C* InPinnedPin)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_C", "OnPinnedPinClicked_����");

	Params::MapWidget_C_OnPinnedPinClicked_____ Parms{};

	Parms.InPinnedPin = InPinnedPin;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget.MapWidget_C.UpdatePinBox
// (BlueprintCallable, BlueprintEvent)

void UMapWidget_C::UpdatePinBox()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_C", "UpdatePinBox");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MapWidget.MapWidget_C.OnStartSavePinInfo_����
// (BlueprintCallable, BlueprintEvent)

void UMapWidget_C::OnStartSavePinInfo_____()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_C", "OnStartSavePinInfo_����");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MapWidget.MapWidget_C.OnMapPressed_����
// (BlueprintCallable, BlueprintEvent)

void UMapWidget_C::OnMapPressed_____()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_C", "OnMapPressed_����");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MapWidget.MapWidget_C.OnParentTerm
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UMapWidget_C::OnParentTerm()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_C", "OnParentTerm");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MapWidget.MapWidget_C.OnRMShopClosed
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UMapWidget_C::OnRMShopClosed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_C", "OnRMShopClosed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MapWidget.MapWidget_C.OnSameMenuBookmarkAccessNew
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           InBookMarkType                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UMapWidget_C::OnSameMenuBookmarkAccessNew(const class FString& InBookMarkType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_C", "OnSameMenuBookmarkAccessNew");

	Params::MapWidget_C_OnSameMenuBookmarkAccessNew Parms{};

	Parms.InBookMarkType = std::move(InBookMarkType);

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget.MapWidget_C.OnSubMenuUpdate
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   MainPage                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   SubPage                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMapWidget_C::OnSubMenuUpdate(int32 MainPage, int32 SubPage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_C", "OnSubMenuUpdate");

	Params::MapWidget_C_OnSubMenuUpdate Parms{};

	Parms.MainPage = MainPage;
	Parms.SubPage = SubPage;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget.MapWidget_C.OnSetMapScrollFunctionOnOffEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsScrollFunctionOn                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D                        InScrollHVLength                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMapWidget_C::OnSetMapScrollFunctionOnOffEvent(bool InIsScrollFunctionOn, const struct FVector2D& InScrollHVLength)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_C", "OnSetMapScrollFunctionOnOffEvent");

	Params::MapWidget_C_OnSetMapScrollFunctionOnOffEvent Parms{};

	Parms.InIsScrollFunctionOn = InIsScrollFunctionOn;
	Parms.InScrollHVLength = std::move(InScrollHVLength);

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget.MapWidget_C.BndEvt__MapScrollBar_K2Node_ComponentBoundEvent_6_OnSliderHValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                                   InValue                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMapWidget_C::BndEvt__MapScrollBar_K2Node_ComponentBoundEvent_6_OnSliderHValueChanged__DelegateSignature(float InValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_C", "BndEvt__MapScrollBar_K2Node_ComponentBoundEvent_6_OnSliderHValueChanged__DelegateSignature");

	Params::MapWidget_C_BndEvt__MapScrollBar_K2Node_ComponentBoundEvent_6_OnSliderHValueChanged__DelegateSignature Parms{};

	Parms.InValue = InValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget.MapWidget_C.BndEvt__MapScrollBar_K2Node_ComponentBoundEvent_0_OnSliderVValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                                   InValue                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMapWidget_C::BndEvt__MapScrollBar_K2Node_ComponentBoundEvent_0_OnSliderVValueChanged__DelegateSignature(float InValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_C", "BndEvt__MapScrollBar_K2Node_ComponentBoundEvent_0_OnSliderVValueChanged__DelegateSignature");

	Params::MapWidget_C_BndEvt__MapScrollBar_K2Node_ComponentBoundEvent_0_OnSliderVValueChanged__DelegateSignature Parms{};

	Parms.InValue = InValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget.MapWidget_C.OnFuncIconSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMapFuncIconType                        InSelectedFuncIconType                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMapWidget_C::OnFuncIconSelected(EMapFuncIconType InSelectedFuncIconType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_C", "OnFuncIconSelected");

	Params::MapWidget_C_OnFuncIconSelected Parms{};

	Parms.InSelectedFuncIconType = InSelectedFuncIconType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget.MapWidget_C.OnChangeToRegionMap_����
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           InRegionMapId                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UMapWidget_C::OnChangeToRegionMap_____(const class FString& InRegionMapId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_C", "OnChangeToRegionMap_����");

	Params::MapWidget_C_OnChangeToRegionMap_____ Parms{};

	Parms.InRegionMapId = std::move(InRegionMapId);

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget.MapWidget_C.OnChangeMap
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           InMapId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                                    InIsWorldMap                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMapWidget_C::OnChangeMap(const class FString& InMapId, bool InIsWorldMap)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_C", "OnChangeMap");

	Params::MapWidget_C_OnChangeMap Parms{};

	Parms.InMapId = std::move(InMapId);
	Parms.InIsWorldMap = InIsWorldMap;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget.MapWidget_C.Init
// (BlueprintCallable, BlueprintEvent)

void UMapWidget_C::Init()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_C", "Init");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MapWidget.MapWidget_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMapWidget_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MapWidget.MapWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMapWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MapWidget.MapWidget_C.BndEvt__MapWidget_VisitedMapList_K2Node_ComponentBoundEvent_4_OnClose__DelegateSignature
// (BlueprintEvent)

void UMapWidget_C::BndEvt__MapWidget_VisitedMapList_K2Node_ComponentBoundEvent_4_OnClose__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_C", "BndEvt__MapWidget_VisitedMapList_K2Node_ComponentBoundEvent_4_OnClose__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MapWidget.MapWidget_C.BndEvt__MapWidget_VisitedMapList_K2Node_ComponentBoundEvent_1_OnListItemClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                           InMapId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UMapWidget_C::BndEvt__MapWidget_VisitedMapList_K2Node_ComponentBoundEvent_1_OnListItemClicked__DelegateSignature(const class FString& InMapId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_C", "BndEvt__MapWidget_VisitedMapList_K2Node_ComponentBoundEvent_1_OnListItemClicked__DelegateSignature");

	Params::MapWidget_C_BndEvt__MapWidget_VisitedMapList_K2Node_ComponentBoundEvent_1_OnListItemClicked__DelegateSignature Parms{};

	Parms.InMapId = std::move(InMapId);

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget.MapWidget_C.BndEvt__DividedZoneList_K2Node_ComponentBoundEvent_0_OnListItemClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                           InDividedZoneId                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UMapWidget_C::BndEvt__DividedZoneList_K2Node_ComponentBoundEvent_0_OnListItemClicked__DelegateSignature(const class FString& InDividedZoneId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_C", "BndEvt__DividedZoneList_K2Node_ComponentBoundEvent_0_OnListItemClicked__DelegateSignature");

	Params::MapWidget_C_BndEvt__DividedZoneList_K2Node_ComponentBoundEvent_0_OnListItemClicked__DelegateSignature Parms{};

	Parms.InDividedZoneId = std::move(InDividedZoneId);

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget.MapWidget_C.CloseVisitedMapList
// (BlueprintCallable, BlueprintEvent)

void UMapWidget_C::CloseVisitedMapList()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_C", "CloseVisitedMapList");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MapWidget.MapWidget_C.BndEvt__MapBtn_K2Node_ComponentBoundEvent_6_OnButtonClicked__DelegateSignature
// (BlueprintEvent)

void UMapWidget_C::BndEvt__MapBtn_K2Node_ComponentBoundEvent_6_OnButtonClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_C", "BndEvt__MapBtn_K2Node_ComponentBoundEvent_6_OnButtonClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MapWidget.MapWidget_C.OnUpdateTraverseCloudEvent
// (BlueprintCallable, BlueprintEvent)

void UMapWidget_C::OnUpdateTraverseCloudEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_C", "OnUpdateTraverseCloudEvent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MapWidget.MapWidget_C.OnDefaultScrollSetting
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                        PlayerPos                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                        FieldSize                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMapWidget_C::OnDefaultScrollSetting(const struct FVector2D& PlayerPos, const struct FVector2D& FieldSize)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_C", "OnDefaultScrollSetting");

	Params::MapWidget_C_OnDefaultScrollSetting Parms{};

	Parms.PlayerPos = std::move(PlayerPos);
	Parms.FieldSize = std::move(FieldSize);

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget.MapWidget_C.OnPlayerViewScroll
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                        IconPosition                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   ViewScale                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMapWidget_C::OnPlayerViewScroll(const struct FVector2D& IconPosition, float ViewScale)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_C", "OnPlayerViewScroll");

	Params::MapWidget_C_OnPlayerViewScroll Parms{};

	Parms.IconPosition = std::move(IconPosition);
	Parms.ViewScale = ViewScale;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget.MapWidget_C.BndEvt__MapScrollBar_K2Node_ComponentBoundEvent_2_OnMouseCaptureEnd__DelegateSignature
// (BlueprintEvent)

void UMapWidget_C::BndEvt__MapScrollBar_K2Node_ComponentBoundEvent_2_OnMouseCaptureEnd__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_C", "BndEvt__MapScrollBar_K2Node_ComponentBoundEvent_2_OnMouseCaptureEnd__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MapWidget.MapWidget_C.BndEvt__MapScrollBar_K2Node_ComponentBoundEvent_1_OnMouseCaptureBegin__DelegateSignature
// (BlueprintEvent)

void UMapWidget_C::BndEvt__MapScrollBar_K2Node_ComponentBoundEvent_1_OnMouseCaptureBegin__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_C", "BndEvt__MapScrollBar_K2Node_ComponentBoundEvent_1_OnMouseCaptureBegin__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MapWidget.MapWidget_C.TickForMapScroll
// (BlueprintCallable, BlueprintEvent)

void UMapWidget_C::TickForMapScroll()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_C", "TickForMapScroll");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MapWidget.MapWidget_C.CloseMapWidget
// (Public, BlueprintCallable, BlueprintEvent)

void UMapWidget_C::CloseMapWidget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_C", "CloseMapWidget");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MapWidget.MapWidget_C.SetupMapList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UMapWidget_C::SetupMapList()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_C", "SetupMapList");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MapWidget.MapWidget_C.GetCurrentMapId
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsWorldMap                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                           OutMapId                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// bool                                    OutIsSubLevel                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                           OutSubLevelId                                          (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void UMapWidget_C::GetCurrentMapId(bool InIsWorldMap, class FString* OutMapId, bool* OutIsSubLevel, class FString* OutSubLevelId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_C", "GetCurrentMapId");

	Params::MapWidget_C_GetCurrentMapId Parms{};

	Parms.InIsWorldMap = InIsWorldMap;

	UObject::ProcessEvent(Func, &Parms);

	if (OutMapId != nullptr)
		*OutMapId = std::move(Parms.OutMapId);

	if (OutIsSubLevel != nullptr)
		*OutIsSubLevel = Parms.OutIsSubLevel;

	if (OutSubLevelId != nullptr)
		*OutSubLevelId = std::move(Parms.OutSubLevelId);
}


// Function MapWidget.MapWidget_C.SetupMap
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           InMapId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                                    InIsWorldMap                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    InIsSelectedByDividedZoneList                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMapWidget_C::SetupMap(const class FString& InMapId, bool InIsWorldMap, bool InIsSelectedByDividedZoneList)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_C", "SetupMap");

	Params::MapWidget_C_SetupMap Parms{};

	Parms.InMapId = std::move(InMapId);
	Parms.InIsWorldMap = InIsWorldMap;
	Parms.InIsSelectedByDividedZoneList = InIsSelectedByDividedZoneList;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget.MapWidget_C.SetupPinDropDownList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UMapWidget_C::SetupPinDropDownList()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_C", "SetupPinDropDownList");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MapWidget.MapWidget_C.SetupWarpPointDropDownList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UMapWidget_C::SetupWarpPointDropDownList()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_C", "SetupWarpPointDropDownList");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MapWidget.MapWidget_C.GetWorldMapId
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           OutId                                                  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void UMapWidget_C::GetWorldMapId(class FString* OutId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_C", "GetWorldMapId");

	Params::MapWidget_C_GetWorldMapId Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutId != nullptr)
		*OutId = std::move(Parms.OutId);
}


// Function MapWidget.MapWidget_C.IsMapListAdd
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSBMapBGConfigTableRow           CheckMap                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                                    IsAdd                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMapWidget_C::IsMapListAdd(struct FSBMapBGConfigTableRow& CheckMap, bool* IsAdd)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_C", "IsMapListAdd");

	Params::MapWidget_C_IsMapListAdd Parms{};

	Parms.CheckMap = std::move(CheckMap);

	UObject::ProcessEvent(Func, &Parms);

	CheckMap = std::move(Parms.CheckMap);

	if (IsAdd != nullptr)
		*IsAdd = Parms.IsAdd;
}


// Function MapWidget.MapWidget_C.TraverseUpdate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           InMapId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int32                                   Floor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMapWidget_C::TraverseUpdate(const class FString& InMapId, int32 Floor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_C", "TraverseUpdate");

	Params::MapWidget_C_TraverseUpdate Parms{};

	Parms.InMapId = std::move(InMapId);
	Parms.Floor = Floor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget.MapWidget_C.CheckIfMapHasDividedZone
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                           InMapId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                                    OutMapHasDividedZones                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMapWidget_C::CheckIfMapHasDividedZone(const class FString& InMapId, bool* OutMapHasDividedZones)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_C", "CheckIfMapHasDividedZone");

	Params::MapWidget_C_CheckIfMapHasDividedZone Parms{};

	Parms.InMapId = std::move(InMapId);

	UObject::ProcessEvent(Func, &Parms);

	if (OutMapHasDividedZones != nullptr)
		*OutMapHasDividedZones = Parms.OutMapHasDividedZones;
}


// Function MapWidget.MapWidget_C.CheckIfMapIsDividedZone
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                           InMapId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                                    OutMapIsDividedZone                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMapWidget_C::CheckIfMapIsDividedZone(const class FString& InMapId, bool* OutMapIsDividedZone)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_C", "CheckIfMapIsDividedZone");

	Params::MapWidget_C_CheckIfMapIsDividedZone Parms{};

	Parms.InMapId = std::move(InMapId);

	UObject::ProcessEvent(Func, &Parms);

	if (OutMapIsDividedZone != nullptr)
		*OutMapIsDividedZone = Parms.OutMapIsDividedZone;
}


// Function MapWidget.MapWidget_C.GetTopMapIdByDividedZoneId
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                           InMapId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                           OutTopMapId                                            (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void UMapWidget_C::GetTopMapIdByDividedZoneId(const class FString& InMapId, class FString* OutTopMapId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_C", "GetTopMapIdByDividedZoneId");

	Params::MapWidget_C_GetTopMapIdByDividedZoneId Parms{};

	Parms.InMapId = std::move(InMapId);

	UObject::ProcessEvent(Func, &Parms);

	if (OutTopMapId != nullptr)
		*OutTopMapId = std::move(Parms.OutTopMapId);
}


// Function MapWidget.MapWidget_C.GetIsRmShopDisplayed
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    OutIsRmShopDisplayed                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMapWidget_C::GetIsRmShopDisplayed(bool* OutIsRmShopDisplayed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_C", "GetIsRmShopDisplayed");

	Params::MapWidget_C_GetIsRmShopDisplayed Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutIsRmShopDisplayed != nullptr)
		*OutIsRmShopDisplayed = Parms.OutIsRmShopDisplayed;
}


// Function MapWidget.MapWidget_C.GetZoneDBRowNameFromZoneId
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           InZoneId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                                    OutIsValid                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                             OutRowName                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMapWidget_C::GetZoneDBRowNameFromZoneId(const class FString& InZoneId, bool* OutIsValid, class FName* OutRowName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_C", "GetZoneDBRowNameFromZoneId");

	Params::MapWidget_C_GetZoneDBRowNameFromZoneId Parms{};

	Parms.InZoneId = std::move(InZoneId);

	UObject::ProcessEvent(Func, &Parms);

	if (OutIsValid != nullptr)
		*OutIsValid = Parms.OutIsValid;

	if (OutRowName != nullptr)
		*OutRowName = Parms.OutRowName;
}


// Function MapWidget.MapWidget_C.GetZoneDBZoneIdFromRowName
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                             InRowName                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    OutIsValid                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                             OutZoneId                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMapWidget_C::GetZoneDBZoneIdFromRowName(class FName InRowName, bool* OutIsValid, class FName* OutZoneId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_C", "GetZoneDBZoneIdFromRowName");

	Params::MapWidget_C_GetZoneDBZoneIdFromRowName Parms{};

	Parms.InRowName = InRowName;

	UObject::ProcessEvent(Func, &Parms);

	if (OutIsValid != nullptr)
		*OutIsValid = Parms.OutIsValid;

	if (OutZoneId != nullptr)
		*OutZoneId = Parms.OutZoneId;
}


// Function MapWidget.MapWidget_C.PublicDungeonCheck
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UMapWidget_C::PublicDungeonCheck()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_C", "PublicDungeonCheck");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MapWidget.MapWidget_C.UpdateMapName
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UMapWidget_C::UpdateMapName()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_C", "UpdateMapName");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MapWidget.MapWidget_C.SetupMapDefaultScroll
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                        Position                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                        MapSize                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMapWidget_C::SetupMapDefaultScroll(const struct FVector2D& Position, const struct FVector2D& MapSize)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_C", "SetupMapDefaultScroll");

	Params::MapWidget_C_SetupMapDefaultScroll Parms{};

	Parms.Position = std::move(Position);
	Parms.MapSize = std::move(MapSize);

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget.MapWidget_C.EXSettingMapCheck
// (Public, BlueprintCallable, BlueprintEvent)

void UMapWidget_C::EXSettingMapCheck()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_C", "EXSettingMapCheck");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MapWidget.MapWidget_C.CheckMapInTemple
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    OutParam                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMapWidget_C::CheckMapInTemple(bool* OutParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_C", "CheckMapInTemple");

	Params::MapWidget_C_CheckMapInTemple Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutParam != nullptr)
		*OutParam = Parms.OutParam;
}


// Function MapWidget.MapWidget_C.TermRequest
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESubMenuTermReason                      InReason                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESubMenuTermRequestReply                ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESubMenuTermRequestReply UMapWidget_C::TermRequest(const ESubMenuTermReason InReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_C", "TermRequest");

	Params::MapWidget_C_TermRequest Parms{};

	Parms.InReason = InReason;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function MapWidget.MapWidget_C.CalcPinWorldPosition
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector2D                        InPinnedLocation                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FVector UMapWidget_C::CalcPinWorldPosition(const struct FVector2D& InPinnedLocation) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_C", "CalcPinWorldPosition");

	Params::MapWidget_C_CalcPinWorldPosition Parms{};

	Parms.InPinnedLocation = std::move(InPinnedLocation);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

