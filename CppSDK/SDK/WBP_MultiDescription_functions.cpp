#pragma once

 

// Package: WBP_MultiDescription

#include "Basic.hpp"

#include "WBP_MultiDescription_classes.hpp"
#include "WBP_MultiDescription_parameters.hpp"


namespace SDK
{

// Function WBP_MultiDescription.WBP_MultiDescription_C.MultipleSales__DelegateSignature
// (Public, Delegate, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InTotalPrice                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FInventoryItemData>       InSelectItemList                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_MultiDescription_C::MultipleSales__DelegateSignature(int32 InTotalPrice, TArray<struct FInventoryItemData>& InSelectItemList)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MultiDescription_C", "MultipleSales__DelegateSignature");

	Params::WBP_MultiDescription_C_MultipleSales__DelegateSignature Parms{};

	Parms.InTotalPrice = InTotalPrice;
	Parms.InSelectItemList = std::move(InSelectItemList);

	UObject::ProcessEvent(Func, &Parms);

	InSelectItemList = std::move(Parms.InSelectItemList);
}


// Function WBP_MultiDescription.WBP_MultiDescription_C.MultipleMoveStorage__DelegateSignature
// (Public, Delegate, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FInventoryItemData>       InSelectItemList                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_MultiDescription_C::MultipleMoveStorage__DelegateSignature(TArray<struct FInventoryItemData>& InSelectItemList)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MultiDescription_C", "MultipleMoveStorage__DelegateSignature");

	Params::WBP_MultiDescription_C_MultipleMoveStorage__DelegateSignature Parms{};

	Parms.InSelectItemList = std::move(InSelectItemList);

	UObject::ProcessEvent(Func, &Parms);

	InSelectItemList = std::move(Parms.InSelectItemList);
}


// Function WBP_MultiDescription.WBP_MultiDescription_C.MultipleMoveBag__DelegateSignature
// (Public, Delegate, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FInventoryItemData>       InSelectItemList                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_MultiDescription_C::MultipleMoveBag__DelegateSignature(TArray<struct FInventoryItemData>& InSelectItemList)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MultiDescription_C", "MultipleMoveBag__DelegateSignature");

	Params::WBP_MultiDescription_C_MultipleMoveBag__DelegateSignature Parms{};

	Parms.InSelectItemList = std::move(InSelectItemList);

	UObject::ProcessEvent(Func, &Parms);

	InSelectItemList = std::move(Parms.InSelectItemList);
}


// Function WBP_MultiDescription.WBP_MultiDescription_C.MultipleTrash__DelegateSignature
// (Public, Delegate, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FInventoryItemData>       InSelectItemList                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_MultiDescription_C::MultipleTrash__DelegateSignature(TArray<struct FInventoryItemData>& InSelectItemList)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MultiDescription_C", "MultipleTrash__DelegateSignature");

	Params::WBP_MultiDescription_C_MultipleTrash__DelegateSignature Parms{};

	Parms.InSelectItemList = std::move(InSelectItemList);

	UObject::ProcessEvent(Func, &Parms);

	InSelectItemList = std::move(Parms.InSelectItemList);
}


// Function WBP_MultiDescription.WBP_MultiDescription_C.OnClick__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryItemData               InventoryData                                          (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UWBP_MultiDescription_C::OnClick__DelegateSignature(const struct FInventoryItemData& InventoryData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MultiDescription_C", "OnClick__DelegateSignature");

	Params::WBP_MultiDescription_C_OnClick__DelegateSignature Parms{};

	Parms.InventoryData = std::move(InventoryData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_MultiDescription.WBP_MultiDescription_C.Close__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_MultiDescription_C::Close__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MultiDescription_C", "Close__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_MultiDescription.WBP_MultiDescription_C.ExecuteUbergraph_WBP_MultiDescription
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MultiDescription_C::ExecuteUbergraph_WBP_MultiDescription(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MultiDescription_C", "ExecuteUbergraph_WBP_MultiDescription");

	Params::WBP_MultiDescription_C_ExecuteUbergraph_WBP_MultiDescription Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_MultiDescription.WBP_MultiDescription_C.TriInAnimationPlay
// (BlueprintCallable, BlueprintEvent)

void UWBP_MultiDescription_C::TriInAnimationPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MultiDescription_C", "TriInAnimationPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_MultiDescription.WBP_MultiDescription_C.UpdateSelectNum
// (BlueprintCallable, BlueprintEvent)

void UWBP_MultiDescription_C::UpdateSelectNum()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MultiDescription_C", "UpdateSelectNum");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_MultiDescription.WBP_MultiDescription_C.CustomEvent_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryItemData               NewParam                                               (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UWBP_MultiDescription_C::CustomEvent_0(const struct FInventoryItemData& NewParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MultiDescription_C", "CustomEvent_0");

	Params::WBP_MultiDescription_C_CustomEvent_0 Parms{};

	Parms.NewParam = std::move(NewParam);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_MultiDescription.WBP_MultiDescription_C.UpdatePrice
// (BlueprintCallable, BlueprintEvent)

void UWBP_MultiDescription_C::UpdatePrice()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MultiDescription_C", "UpdatePrice");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_MultiDescription.WBP_MultiDescription_C.BndEvt__BtnTrash_K2Node_ComponentBoundEvent_3_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void UWBP_MultiDescription_C::BndEvt__BtnTrash_K2Node_ComponentBoundEvent_3_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MultiDescription_C", "BndEvt__BtnTrash_K2Node_ComponentBoundEvent_3_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_MultiDescription.WBP_MultiDescription_C.BndEvt__BtnMoveBag_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void UWBP_MultiDescription_C::BndEvt__BtnMoveBag_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MultiDescription_C", "BndEvt__BtnMoveBag_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_MultiDescription.WBP_MultiDescription_C.BndEvt__BtnSale1_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void UWBP_MultiDescription_C::BndEvt__BtnSale1_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MultiDescription_C", "BndEvt__BtnSale1_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_MultiDescription.WBP_MultiDescription_C.SettingList
// (BlueprintCallable, BlueprintEvent)

void UWBP_MultiDescription_C::SettingList()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MultiDescription_C", "SettingList");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_MultiDescription.WBP_MultiDescription_C.AlignRequiredNum
// (BlueprintCallable, BlueprintEvent)

void UWBP_MultiDescription_C::AlignRequiredNum()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MultiDescription_C", "AlignRequiredNum");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_MultiDescription.WBP_MultiDescription_C.AddList
// (BlueprintCallable, BlueprintEvent)

void UWBP_MultiDescription_C::AddList()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MultiDescription_C", "AddList");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_MultiDescription.WBP_MultiDescription_C.UpdateSalesItems
// (BlueprintCallable, BlueprintEvent)

void UWBP_MultiDescription_C::UpdateSalesItems()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MultiDescription_C", "UpdateSalesItems");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_MultiDescription.WBP_MultiDescription_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_MultiDescription_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MultiDescription_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_MultiDescription.WBP_MultiDescription_C.SetSelectItems
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UItemIconBtn_C*                   InputPin                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EStorageMultipleSalesWindowType         NewParam                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MultiDescription_C::SetSelectItems(const class UItemIconBtn_C*& InputPin, EStorageMultipleSalesWindowType* NewParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MultiDescription_C", "SetSelectItems");

	Params::WBP_MultiDescription_C_SetSelectItems Parms{};

	Parms.InputPin = InputPin;

	UObject::ProcessEvent(Func, &Parms);

	if (NewParam != nullptr)
		*NewParam = Parms.NewParam;
}


// Function WBP_MultiDescription.WBP_MultiDescription_C.AllRemoveSalesItems
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_MultiDescription_C::AllRemoveSalesItems()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MultiDescription_C", "AllRemoveSalesItems");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_MultiDescription.WBP_MultiDescription_C.SetSalesItemList
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_MultiDescription_C::SetSalesItemList()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MultiDescription_C", "SetSalesItemList");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_MultiDescription.WBP_MultiDescription_C.SetInventoryStorageList
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_StorageRowListOwner_C*       Param_InventoryStorageList                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MultiDescription_C::SetInventoryStorageList(class UWBP_StorageRowListOwner_C* Param_InventoryStorageList)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MultiDescription_C", "SetInventoryStorageList");

	Params::WBP_MultiDescription_C_SetInventoryStorageList Parms{};

	Parms.Param_InventoryStorageList = Param_InventoryStorageList;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_MultiDescription.WBP_MultiDescription_C.Get Total Item Num
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 UWBP_MultiDescription_C::Get_Total_Item_Num()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MultiDescription_C", "Get Total Item Num");

	Params::WBP_MultiDescription_C_Get_Total_Item_Num Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_MultiDescription.WBP_MultiDescription_C.UpdateButton
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_MultiDescription_C::UpdateButton()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MultiDescription_C", "UpdateButton");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_MultiDescription.WBP_MultiDescription_C.IsSaleItem
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryItemData               InventoryItemData                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// bool                                    Param_IsSaleItem                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_MultiDescription_C::IsSaleItem(const struct FInventoryItemData& InventoryItemData, bool* Param_IsSaleItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MultiDescription_C", "IsSaleItem");

	Params::WBP_MultiDescription_C_IsSaleItem Parms{};

	Parms.InventoryItemData = std::move(InventoryItemData);

	UObject::ProcessEvent(Func, &Parms);

	if (Param_IsSaleItem != nullptr)
		*Param_IsSaleItem = Parms.Param_IsSaleItem;
}


// Function WBP_MultiDescription.WBP_MultiDescription_C.Remove Select Item
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryItemData               Item                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)

void UWBP_MultiDescription_C::Remove_Select_Item(const struct FInventoryItemData& Item)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MultiDescription_C", "Remove Select Item");

	Params::WBP_MultiDescription_C_Remove_Select_Item Parms{};

	Parms.Item = std::move(Item);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_MultiDescription.WBP_MultiDescription_C.GetSelectItemList
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FInventoryItemData>       Param_Select_Item_Data                                 (Parm, OutParm)

void UWBP_MultiDescription_C::GetSelectItemList(TArray<struct FInventoryItemData>* Param_Select_Item_Data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MultiDescription_C", "GetSelectItemList");

	Params::WBP_MultiDescription_C_GetSelectItemList Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_Select_Item_Data != nullptr)
		*Param_Select_Item_Data = std::move(Parms.Param_Select_Item_Data);
}

}

