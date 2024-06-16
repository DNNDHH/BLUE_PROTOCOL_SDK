#pragma once

 

// Package: LibraryMenu_LoginBonusList

#include "Basic.hpp"

#include "LibraryMenu_LoginBonusList_classes.hpp"
#include "LibraryMenu_LoginBonusList_parameters.hpp"


namespace SDK
{

// Function LibraryMenu_LoginBonusList.LibraryMenu_LoginBonusList_C.OnListInitComplete__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ULibraryMenu_LoginBonusList_C::OnListInitComplete__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_LoginBonusList_C", "OnListInitComplete__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_LoginBonusList.LibraryMenu_LoginBonusList_C.ListItemClick__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibraryMenu_LoginBonusList_C::ListItemClick__DelegateSignature(int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_LoginBonusList_C", "ListItemClick__DelegateSignature");

	Params::LibraryMenu_LoginBonusList_C_ListItemClick__DelegateSignature Parms{};

	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_LoginBonusList.LibraryMenu_LoginBonusList_C.BannerClick__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   ID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibraryMenu_LoginBonusList_C::BannerClick__DelegateSignature(int32 ID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_LoginBonusList_C", "BannerClick__DelegateSignature");

	Params::LibraryMenu_LoginBonusList_C_BannerClick__DelegateSignature Parms{};

	Parms.ID = ID;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_LoginBonusList.LibraryMenu_LoginBonusList_C.ExecuteUbergraph_LibraryMenu_LoginBonusList
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibraryMenu_LoginBonusList_C::ExecuteUbergraph_LibraryMenu_LoginBonusList(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_LoginBonusList_C", "ExecuteUbergraph_LibraryMenu_LoginBonusList");

	Params::LibraryMenu_LoginBonusList_C_ExecuteUbergraph_LibraryMenu_LoginBonusList Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_LoginBonusList.LibraryMenu_LoginBonusList_C.OnBannerClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   ID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ULibraryMenu_LoginBonus_BannerImage_C*SelectedBtn                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibraryMenu_LoginBonusList_C::OnBannerClicked(int32 ID, class ULibraryMenu_LoginBonus_BannerImage_C* SelectedBtn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_LoginBonusList_C", "OnBannerClicked");

	Params::LibraryMenu_LoginBonusList_C_OnBannerClicked Parms{};

	Parms.ID = ID;
	Parms.SelectedBtn = SelectedBtn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_LoginBonusList.LibraryMenu_LoginBonusList_C.BndEvt__LibraryMenu_LoginBonusList_RightArrow_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void ULibraryMenu_LoginBonusList_C::BndEvt__LibraryMenu_LoginBonusList_RightArrow_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_LoginBonusList_C", "BndEvt__LibraryMenu_LoginBonusList_RightArrow_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_LoginBonusList.LibraryMenu_LoginBonusList_C.BndEvt__LibraryMenu_LoginBonusList_LeftArrow_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void ULibraryMenu_LoginBonusList_C::BndEvt__LibraryMenu_LoginBonusList_LeftArrow_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_LoginBonusList_C", "BndEvt__LibraryMenu_LoginBonusList_LeftArrow_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_LoginBonusList.LibraryMenu_LoginBonusList_C.OnListItemClick
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibraryMenu_LoginBonusList_C::OnListItemClick(int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_LoginBonusList_C", "OnListItemClick");

	Params::LibraryMenu_LoginBonusList_C_OnListItemClick Parms{};

	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_LoginBonusList.LibraryMenu_LoginBonusList_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void ULibraryMenu_LoginBonusList_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_LoginBonusList_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_LoginBonusList.LibraryMenu_LoginBonusList_C.OnImageLoadComplete
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Enable                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULibraryMenu_LoginBonusList_C::OnImageLoadComplete(bool Enable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_LoginBonusList_C", "OnImageLoadComplete");

	Params::LibraryMenu_LoginBonusList_C_OnImageLoadComplete Parms{};

	Parms.Enable = Enable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_LoginBonusList.LibraryMenu_LoginBonusList_C.Finish
// (BlueprintCallable, BlueprintEvent)

void ULibraryMenu_LoginBonusList_C::Finish()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_LoginBonusList_C", "Finish");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_LoginBonusList.LibraryMenu_LoginBonusList_C.Initialize
// (BlueprintCallable, BlueprintEvent)

void ULibraryMenu_LoginBonusList_C::Initialize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_LoginBonusList_C", "Initialize");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_LoginBonusList.LibraryMenu_LoginBonusList_C.SetData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBLoginBonusWindowData          DataList                                               (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                                    MouseClick                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULibraryMenu_LoginBonusList_C::SetData(const struct FSBLoginBonusWindowData& DataList, bool MouseClick)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_LoginBonusList_C", "SetData");

	Params::LibraryMenu_LoginBonusList_C_SetData Parms{};

	Parms.DataList = std::move(DataList);
	Parms.MouseClick = MouseClick;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_LoginBonusList.LibraryMenu_LoginBonusList_C.SetupMouseClickEvent
// (Public, BlueprintCallable, BlueprintEvent)

void ULibraryMenu_LoginBonusList_C::SetupMouseClickEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_LoginBonusList_C", "SetupMouseClickEvent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_LoginBonusList.LibraryMenu_LoginBonusList_C.SetBannerImage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2DDynamic*                TextureData                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibraryMenu_LoginBonusList_C::SetBannerImage(int32 Param_Index, class UTexture2DDynamic* TextureData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_LoginBonusList_C", "SetBannerImage");

	Params::LibraryMenu_LoginBonusList_C_SetBannerImage Parms{};

	Parms.Param_Index = Param_Index;
	Parms.TextureData = TextureData;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_LoginBonusList.LibraryMenu_LoginBonusList_C.SetBannerData
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FSBLoginBonusWindowData>  DataList                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ULibraryMenu_LoginBonusList_C::SetBannerData(TArray<struct FSBLoginBonusWindowData>& DataList)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_LoginBonusList_C", "SetBannerData");

	Params::LibraryMenu_LoginBonusList_C_SetBannerData Parms{};

	Parms.DataList = std::move(DataList);

	UObject::ProcessEvent(Func, &Parms);

	DataList = std::move(Parms.DataList);
}


// Function LibraryMenu_LoginBonusList.LibraryMenu_LoginBonusList_C.SetBannerViewIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   ViewIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibraryMenu_LoginBonusList_C::SetBannerViewIndex(int32 ViewIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_LoginBonusList_C", "SetBannerViewIndex");

	Params::LibraryMenu_LoginBonusList_C_SetBannerViewIndex Parms{};

	Parms.ViewIndex = ViewIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_LoginBonusList.LibraryMenu_LoginBonusList_C.SetBannerTexture
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                       Texture                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibraryMenu_LoginBonusList_C::SetBannerTexture(int32 Param_Index, class UTexture2D* Texture)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_LoginBonusList_C", "SetBannerTexture");

	Params::LibraryMenu_LoginBonusList_C_SetBannerTexture Parms{};

	Parms.Param_Index = Param_Index;
	Parms.Texture = Texture;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_LoginBonusList.LibraryMenu_LoginBonusList_C.UpdateBannerViewIndex
// (Public, BlueprintCallable, BlueprintEvent)

void ULibraryMenu_LoginBonusList_C::UpdateBannerViewIndex()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_LoginBonusList_C", "UpdateBannerViewIndex");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_LoginBonusList.LibraryMenu_LoginBonusList_C.Play Anim Login Bonus List In
// (Public, BlueprintCallable, BlueprintEvent)

void ULibraryMenu_LoginBonusList_C::Play_Anim_Login_Bonus_List_In()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_LoginBonusList_C", "Play Anim Login Bonus List In");

	UObject::ProcessEvent(Func, nullptr);
}

}

