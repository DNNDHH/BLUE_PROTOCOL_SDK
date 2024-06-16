#pragma once

 

// Package: MapWidget_VisitedMapList2

#include "Basic.hpp"

#include "MapWidget_VisitedMapList2_classes.hpp"
#include "MapWidget_VisitedMapList2_parameters.hpp"


namespace SDK
{

// Function MapWidget_VisitedMapList2.MapWidget_VisitedMapList2_C.OnListItemClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           InMapId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UMapWidget_VisitedMapList2_C::OnListItemClicked__DelegateSignature(const class FString& InMapId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_VisitedMapList2_C", "OnListItemClicked__DelegateSignature");

	Params::MapWidget_VisitedMapList2_C_OnListItemClicked__DelegateSignature Parms{};

	Parms.InMapId = std::move(InMapId);

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget_VisitedMapList2.MapWidget_VisitedMapList2_C.OnClose__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UMapWidget_VisitedMapList2_C::OnClose__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_VisitedMapList2_C", "OnClose__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MapWidget_VisitedMapList2.MapWidget_VisitedMapList2_C.ExecuteUbergraph_MapWidget_VisitedMapList2
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMapWidget_VisitedMapList2_C::ExecuteUbergraph_MapWidget_VisitedMapList2(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_VisitedMapList2_C", "ExecuteUbergraph_MapWidget_VisitedMapList2");

	Params::MapWidget_VisitedMapList2_C_ExecuteUbergraph_MapWidget_VisitedMapList2 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget_VisitedMapList2.MapWidget_VisitedMapList2_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMapWidget_VisitedMapList2_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_VisitedMapList2_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MapWidget_VisitedMapList2.MapWidget_VisitedMapList2_C.BndEvt__MapWidget_VisitedMapList2_BasicPager_K2Node_ComponentBoundEvent_1_OnPageChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                                   Page                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMapWidget_VisitedMapList2_C::BndEvt__MapWidget_VisitedMapList2_BasicPager_K2Node_ComponentBoundEvent_1_OnPageChange__DelegateSignature(int32 Page)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_VisitedMapList2_C", "BndEvt__MapWidget_VisitedMapList2_BasicPager_K2Node_ComponentBoundEvent_1_OnPageChange__DelegateSignature");

	Params::MapWidget_VisitedMapList2_C_BndEvt__MapWidget_VisitedMapList2_BasicPager_K2Node_ComponentBoundEvent_1_OnPageChange__DelegateSignature Parms{};

	Parms.Page = Page;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget_VisitedMapList2.MapWidget_VisitedMapList2_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*                 Animation                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMapWidget_VisitedMapList2_C::OnAnimationFinished(const class UWidgetAnimation* Animation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_VisitedMapList2_C", "OnAnimationFinished");

	Params::MapWidget_VisitedMapList2_C_OnAnimationFinished Parms{};

	Parms.Animation = Animation;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget_VisitedMapList2.MapWidget_VisitedMapList2_C.BndEvt__MapWidget_VisitedMapList2_BtnScreen_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UMapWidget_VisitedMapList2_C::BndEvt__MapWidget_VisitedMapList2_BtnScreen_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_VisitedMapList2_C", "BndEvt__MapWidget_VisitedMapList2_BtnScreen_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MapWidget_VisitedMapList2.MapWidget_VisitedMapList2_C.OnPress_Cancel
// (Event, Public, BlueprintEvent)

void UMapWidget_VisitedMapList2_C::OnPress_Cancel()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_VisitedMapList2_C", "OnPress_Cancel");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MapWidget_VisitedMapList2.MapWidget_VisitedMapList2_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMapWidget_VisitedMapList2_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_VisitedMapList2_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MapWidget_VisitedMapList2.MapWidget_VisitedMapList2_C.OnListItemClickedEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           InMapId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UMapWidget_VisitedMapList2_C::OnListItemClickedEvent(const class FString& InMapId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_VisitedMapList2_C", "OnListItemClickedEvent");

	Params::MapWidget_VisitedMapList2_C_OnListItemClickedEvent Parms{};

	Parms.InMapId = std::move(InMapId);

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget_VisitedMapList2.MapWidget_VisitedMapList2_C.UnbindListItem
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMapWidget_VisitedMapList2Item_C* Target                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMapWidget_VisitedMapList2_C::UnbindListItem(class UMapWidget_VisitedMapList2Item_C* Target)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_VisitedMapList2_C", "UnbindListItem");

	Params::MapWidget_VisitedMapList2_C_UnbindListItem Parms{};

	Parms.Target = Target;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget_VisitedMapList2.MapWidget_VisitedMapList2_C.BindListItem
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMapWidget_VisitedMapList2Item_C* Target                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMapWidget_VisitedMapList2_C::BindListItem(class UMapWidget_VisitedMapList2Item_C* Target)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_VisitedMapList2_C", "BindListItem");

	Params::MapWidget_VisitedMapList2_C_BindListItem Parms{};

	Parms.Target = Target;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget_VisitedMapList2.MapWidget_VisitedMapList2_C.Open
// (Public, BlueprintCallable, BlueprintEvent)

void UMapWidget_VisitedMapList2_C::Open()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_VisitedMapList2_C", "Open");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MapWidget_VisitedMapList2.MapWidget_VisitedMapList2_C.Close
// (Public, BlueprintCallable, BlueprintEvent)

void UMapWidget_VisitedMapList2_C::Close()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_VisitedMapList2_C", "Close");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MapWidget_VisitedMapList2.MapWidget_VisitedMapList2_C.SetupListItem
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UMapWidget_VisitedMapList2_C::SetupListItem()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_VisitedMapList2_C", "SetupListItem");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MapWidget_VisitedMapList2.MapWidget_VisitedMapList2_C.ResetListItem
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UMapWidget_VisitedMapList2_C::ResetListItem()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_VisitedMapList2_C", "ResetListItem");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MapWidget_VisitedMapList2.MapWidget_VisitedMapList2_C.Setup
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FString>                   InMapIds                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FString                           InCurrentId                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UMapWidget_VisitedMapList2_C::Setup(TArray<class FString>& InMapIds, const class FString& InCurrentId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_VisitedMapList2_C", "Setup");

	Params::MapWidget_VisitedMapList2_C_Setup Parms{};

	Parms.InMapIds = std::move(InMapIds);
	Parms.InCurrentId = std::move(InCurrentId);

	UObject::ProcessEvent(Func, &Parms);

	InMapIds = std::move(Parms.InMapIds);
}


// Function MapWidget_VisitedMapList2.MapWidget_VisitedMapList2_C.PageChange
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Page                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMapWidget_VisitedMapList2_C::PageChange(int32 Page)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_VisitedMapList2_C", "PageChange");

	Params::MapWidget_VisitedMapList2_C_PageChange Parms{};

	Parms.Page = Page;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget_VisitedMapList2.MapWidget_VisitedMapList2_C.ChangeFaceImageTexture
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2DDynamic*                Texture                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMapWidget_VisitedMapList2_C::ChangeFaceImageTexture(class UTexture2DDynamic* Texture)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_VisitedMapList2_C", "ChangeFaceImageTexture");

	Params::MapWidget_VisitedMapList2_C_ChangeFaceImageTexture Parms{};

	Parms.Texture = Texture;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget_VisitedMapList2.MapWidget_VisitedMapList2_C.GetViewCount
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 UMapWidget_VisitedMapList2_C::GetViewCount() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_VisitedMapList2_C", "GetViewCount");

	Params::MapWidget_VisitedMapList2_C_GetViewCount Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

