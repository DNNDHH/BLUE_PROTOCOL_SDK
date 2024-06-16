#pragma once

 

// Package: EquipList

#include "Basic.hpp"

#include "EquipList_classes.hpp"
#include "EquipList_parameters.hpp"


namespace SDK
{

// Function EquipList.EquipList_C.OnClickedEquipList__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   OutItemId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           OutUniqueId                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UEquipList_C::OnClickedEquipList__DelegateSignature(int32 OutItemId, const class FString& OutUniqueId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipList_C", "OnClickedEquipList__DelegateSignature");

	Params::EquipList_C_OnClickedEquipList__DelegateSignature Parms{};

	Parms.OutItemId = OutItemId;
	Parms.OutUniqueId = std::move(OutUniqueId);

	UObject::ProcessEvent(Func, &Parms);
}


// Function EquipList.EquipList_C.ExecuteUbergraph_EquipList
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEquipList_C::ExecuteUbergraph_EquipList(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipList_C", "ExecuteUbergraph_EquipList");

	Params::EquipList_C_ExecuteUbergraph_EquipList Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EquipList.EquipList_C.BndEvt__EquipList_MountImagineIcon_K2Node_ComponentBoundEvent_28_OnClickedCostumeIcon__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                                   OutItemIndex                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           OutUniqueId                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UEquipList_C::BndEvt__EquipList_MountImagineIcon_K2Node_ComponentBoundEvent_28_OnClickedCostumeIcon__DelegateSignature(int32 OutItemIndex, const class FString& OutUniqueId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipList_C", "BndEvt__EquipList_MountImagineIcon_K2Node_ComponentBoundEvent_28_OnClickedCostumeIcon__DelegateSignature");

	Params::EquipList_C_BndEvt__EquipList_MountImagineIcon_K2Node_ComponentBoundEvent_28_OnClickedCostumeIcon__DelegateSignature Parms{};

	Parms.OutItemIndex = OutItemIndex;
	Parms.OutUniqueId = std::move(OutUniqueId);

	UObject::ProcessEvent(Func, &Parms);
}


// Function EquipList.EquipList_C.BndEvt__EquipList_Accessories_RightHandIcon_K2Node_ComponentBoundEvent_27_OnClickedCostumeIcon__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                                   OutItemIndex                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           OutUniqueId                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UEquipList_C::BndEvt__EquipList_Accessories_RightHandIcon_K2Node_ComponentBoundEvent_27_OnClickedCostumeIcon__DelegateSignature(int32 OutItemIndex, const class FString& OutUniqueId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipList_C", "BndEvt__EquipList_Accessories_RightHandIcon_K2Node_ComponentBoundEvent_27_OnClickedCostumeIcon__DelegateSignature");

	Params::EquipList_C_BndEvt__EquipList_Accessories_RightHandIcon_K2Node_ComponentBoundEvent_27_OnClickedCostumeIcon__DelegateSignature Parms{};

	Parms.OutItemIndex = OutItemIndex;
	Parms.OutUniqueId = std::move(OutUniqueId);

	UObject::ProcessEvent(Func, &Parms);
}


// Function EquipList.EquipList_C.BndEvt__EquipList_Accessories_LeftHandIcon_K2Node_ComponentBoundEvent_26_OnClickedCostumeIcon__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                                   OutItemIndex                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           OutUniqueId                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UEquipList_C::BndEvt__EquipList_Accessories_LeftHandIcon_K2Node_ComponentBoundEvent_26_OnClickedCostumeIcon__DelegateSignature(int32 OutItemIndex, const class FString& OutUniqueId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipList_C", "BndEvt__EquipList_Accessories_LeftHandIcon_K2Node_ComponentBoundEvent_26_OnClickedCostumeIcon__DelegateSignature");

	Params::EquipList_C_BndEvt__EquipList_Accessories_LeftHandIcon_K2Node_ComponentBoundEvent_26_OnClickedCostumeIcon__DelegateSignature Parms{};

	Parms.OutItemIndex = OutItemIndex;
	Parms.OutUniqueId = std::move(OutUniqueId);

	UObject::ProcessEvent(Func, &Parms);
}


// Function EquipList.EquipList_C.BndEvt__EquipList_Accessories_HeadIcon_K2Node_ComponentBoundEvent_25_OnClickedCostumeIcon__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                                   OutItemIndex                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           OutUniqueId                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UEquipList_C::BndEvt__EquipList_Accessories_HeadIcon_K2Node_ComponentBoundEvent_25_OnClickedCostumeIcon__DelegateSignature(int32 OutItemIndex, const class FString& OutUniqueId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipList_C", "BndEvt__EquipList_Accessories_HeadIcon_K2Node_ComponentBoundEvent_25_OnClickedCostumeIcon__DelegateSignature");

	Params::EquipList_C_BndEvt__EquipList_Accessories_HeadIcon_K2Node_ComponentBoundEvent_25_OnClickedCostumeIcon__DelegateSignature Parms{};

	Parms.OutItemIndex = OutItemIndex;
	Parms.OutUniqueId = std::move(OutUniqueId);

	UObject::ProcessEvent(Func, &Parms);
}


// Function EquipList.EquipList_C.BndEvt__EquipList_Accessories_FaceIcon_K2Node_ComponentBoundEvent_24_OnClickedCostumeIcon__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                                   OutItemIndex                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           OutUniqueId                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UEquipList_C::BndEvt__EquipList_Accessories_FaceIcon_K2Node_ComponentBoundEvent_24_OnClickedCostumeIcon__DelegateSignature(int32 OutItemIndex, const class FString& OutUniqueId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipList_C", "BndEvt__EquipList_Accessories_FaceIcon_K2Node_ComponentBoundEvent_24_OnClickedCostumeIcon__DelegateSignature");

	Params::EquipList_C_BndEvt__EquipList_Accessories_FaceIcon_K2Node_ComponentBoundEvent_24_OnClickedCostumeIcon__DelegateSignature Parms{};

	Parms.OutItemIndex = OutItemIndex;
	Parms.OutUniqueId = std::move(OutUniqueId);

	UObject::ProcessEvent(Func, &Parms);
}


// Function EquipList.EquipList_C.BndEvt__EquipList_Accessories_EyeIcon_K2Node_ComponentBoundEvent_23_OnClickedCostumeIcon__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                                   OutItemIndex                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           OutUniqueId                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UEquipList_C::BndEvt__EquipList_Accessories_EyeIcon_K2Node_ComponentBoundEvent_23_OnClickedCostumeIcon__DelegateSignature(int32 OutItemIndex, const class FString& OutUniqueId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipList_C", "BndEvt__EquipList_Accessories_EyeIcon_K2Node_ComponentBoundEvent_23_OnClickedCostumeIcon__DelegateSignature");

	Params::EquipList_C_BndEvt__EquipList_Accessories_EyeIcon_K2Node_ComponentBoundEvent_23_OnClickedCostumeIcon__DelegateSignature Parms{};

	Parms.OutItemIndex = OutItemIndex;
	Parms.OutUniqueId = std::move(OutUniqueId);

	UObject::ProcessEvent(Func, &Parms);
}


// Function EquipList.EquipList_C.BndEvt__EquipList_Accessories_EarIcon_K2Node_ComponentBoundEvent_22_OnClickedCostumeIcon__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                                   OutItemIndex                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           OutUniqueId                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UEquipList_C::BndEvt__EquipList_Accessories_EarIcon_K2Node_ComponentBoundEvent_22_OnClickedCostumeIcon__DelegateSignature(int32 OutItemIndex, const class FString& OutUniqueId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipList_C", "BndEvt__EquipList_Accessories_EarIcon_K2Node_ComponentBoundEvent_22_OnClickedCostumeIcon__DelegateSignature");

	Params::EquipList_C_BndEvt__EquipList_Accessories_EarIcon_K2Node_ComponentBoundEvent_22_OnClickedCostumeIcon__DelegateSignature Parms{};

	Parms.OutItemIndex = OutItemIndex;
	Parms.OutUniqueId = std::move(OutUniqueId);

	UObject::ProcessEvent(Func, &Parms);
}


// Function EquipList.EquipList_C.BndEvt__EquipList_Accessories_BottomsIcon_K2Node_ComponentBoundEvent_21_OnClickedCostumeIcon__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                                   OutItemIndex                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           OutUniqueId                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UEquipList_C::BndEvt__EquipList_Accessories_BottomsIcon_K2Node_ComponentBoundEvent_21_OnClickedCostumeIcon__DelegateSignature(int32 OutItemIndex, const class FString& OutUniqueId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipList_C", "BndEvt__EquipList_Accessories_BottomsIcon_K2Node_ComponentBoundEvent_21_OnClickedCostumeIcon__DelegateSignature");

	Params::EquipList_C_BndEvt__EquipList_Accessories_BottomsIcon_K2Node_ComponentBoundEvent_21_OnClickedCostumeIcon__DelegateSignature Parms{};

	Parms.OutItemIndex = OutItemIndex;
	Parms.OutUniqueId = std::move(OutUniqueId);

	UObject::ProcessEvent(Func, &Parms);
}


// Function EquipList.EquipList_C.BndEvt__EquipList_Accessories_BackIcon_K2Node_ComponentBoundEvent_20_OnClickedCostumeIcon__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                                   OutItemIndex                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           OutUniqueId                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UEquipList_C::BndEvt__EquipList_Accessories_BackIcon_K2Node_ComponentBoundEvent_20_OnClickedCostumeIcon__DelegateSignature(int32 OutItemIndex, const class FString& OutUniqueId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipList_C", "BndEvt__EquipList_Accessories_BackIcon_K2Node_ComponentBoundEvent_20_OnClickedCostumeIcon__DelegateSignature");

	Params::EquipList_C_BndEvt__EquipList_Accessories_BackIcon_K2Node_ComponentBoundEvent_20_OnClickedCostumeIcon__DelegateSignature Parms{};

	Parms.OutItemIndex = OutItemIndex;
	Parms.OutUniqueId = std::move(OutUniqueId);

	UObject::ProcessEvent(Func, &Parms);
}


// Function EquipList.EquipList_C.BndEvt__EquipList_Costume_BottomsIcon_K2Node_ComponentBoundEvent_19_OnClickedCostumeIcon__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                                   OutItemIndex                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           OutUniqueId                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UEquipList_C::BndEvt__EquipList_Costume_BottomsIcon_K2Node_ComponentBoundEvent_19_OnClickedCostumeIcon__DelegateSignature(int32 OutItemIndex, const class FString& OutUniqueId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipList_C", "BndEvt__EquipList_Costume_BottomsIcon_K2Node_ComponentBoundEvent_19_OnClickedCostumeIcon__DelegateSignature");

	Params::EquipList_C_BndEvt__EquipList_Costume_BottomsIcon_K2Node_ComponentBoundEvent_19_OnClickedCostumeIcon__DelegateSignature Parms{};

	Parms.OutItemIndex = OutItemIndex;
	Parms.OutUniqueId = std::move(OutUniqueId);

	UObject::ProcessEvent(Func, &Parms);
}


// Function EquipList.EquipList_C.BndEvt__EquipList_Costume_ShoesIcon_K2Node_ComponentBoundEvent_18_OnClickedCostumeIcon__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                                   OutItemIndex                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           OutUniqueId                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UEquipList_C::BndEvt__EquipList_Costume_ShoesIcon_K2Node_ComponentBoundEvent_18_OnClickedCostumeIcon__DelegateSignature(int32 OutItemIndex, const class FString& OutUniqueId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipList_C", "BndEvt__EquipList_Costume_ShoesIcon_K2Node_ComponentBoundEvent_18_OnClickedCostumeIcon__DelegateSignature");

	Params::EquipList_C_BndEvt__EquipList_Costume_ShoesIcon_K2Node_ComponentBoundEvent_18_OnClickedCostumeIcon__DelegateSignature Parms{};

	Parms.OutItemIndex = OutItemIndex;
	Parms.OutUniqueId = std::move(OutUniqueId);

	UObject::ProcessEvent(Func, &Parms);
}


// Function EquipList.EquipList_C.BndEvt__EquipList_Costume_UnderWearIcon_K2Node_ComponentBoundEvent_17_OnClickedCostumeIcon__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                                   OutItemIndex                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           OutUniqueId                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UEquipList_C::BndEvt__EquipList_Costume_UnderWearIcon_K2Node_ComponentBoundEvent_17_OnClickedCostumeIcon__DelegateSignature(int32 OutItemIndex, const class FString& OutUniqueId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipList_C", "BndEvt__EquipList_Costume_UnderWearIcon_K2Node_ComponentBoundEvent_17_OnClickedCostumeIcon__DelegateSignature");

	Params::EquipList_C_BndEvt__EquipList_Costume_UnderWearIcon_K2Node_ComponentBoundEvent_17_OnClickedCostumeIcon__DelegateSignature Parms{};

	Parms.OutItemIndex = OutItemIndex;
	Parms.OutUniqueId = std::move(OutUniqueId);

	UObject::ProcessEvent(Func, &Parms);
}


// Function EquipList.EquipList_C.BndEvt__EquipList_Costume_HandIcon_K2Node_ComponentBoundEvent_16_OnClickedCostumeIcon__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                                   OutItemIndex                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           OutUniqueId                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UEquipList_C::BndEvt__EquipList_Costume_HandIcon_K2Node_ComponentBoundEvent_16_OnClickedCostumeIcon__DelegateSignature(int32 OutItemIndex, const class FString& OutUniqueId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipList_C", "BndEvt__EquipList_Costume_HandIcon_K2Node_ComponentBoundEvent_16_OnClickedCostumeIcon__DelegateSignature");

	Params::EquipList_C_BndEvt__EquipList_Costume_HandIcon_K2Node_ComponentBoundEvent_16_OnClickedCostumeIcon__DelegateSignature Parms{};

	Parms.OutItemIndex = OutItemIndex;
	Parms.OutUniqueId = std::move(OutUniqueId);

	UObject::ProcessEvent(Func, &Parms);
}


// Function EquipList.EquipList_C.BndEvt__EquipList_Costume_WearIcon_K2Node_ComponentBoundEvent_15_OnClickedCostumeIcon__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                                   OutItemIndex                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           OutUniqueId                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UEquipList_C::BndEvt__EquipList_Costume_WearIcon_K2Node_ComponentBoundEvent_15_OnClickedCostumeIcon__DelegateSignature(int32 OutItemIndex, const class FString& OutUniqueId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipList_C", "BndEvt__EquipList_Costume_WearIcon_K2Node_ComponentBoundEvent_15_OnClickedCostumeIcon__DelegateSignature");

	Params::EquipList_C_BndEvt__EquipList_Costume_WearIcon_K2Node_ComponentBoundEvent_15_OnClickedCostumeIcon__DelegateSignature Parms{};

	Parms.OutItemIndex = OutItemIndex;
	Parms.OutUniqueId = std::move(OutUniqueId);

	UObject::ProcessEvent(Func, &Parms);
}


// Function EquipList.EquipList_C.BndEvt__EquipList_Costume_HeadIcon_K2Node_ComponentBoundEvent_14_OnClickedCostumeIcon__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                                   OutItemIndex                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           OutUniqueId                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UEquipList_C::BndEvt__EquipList_Costume_HeadIcon_K2Node_ComponentBoundEvent_14_OnClickedCostumeIcon__DelegateSignature(int32 OutItemIndex, const class FString& OutUniqueId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipList_C", "BndEvt__EquipList_Costume_HeadIcon_K2Node_ComponentBoundEvent_14_OnClickedCostumeIcon__DelegateSignature");

	Params::EquipList_C_BndEvt__EquipList_Costume_HeadIcon_K2Node_ComponentBoundEvent_14_OnClickedCostumeIcon__DelegateSignature Parms{};

	Parms.OutItemIndex = OutItemIndex;
	Parms.OutUniqueId = std::move(OutUniqueId);

	UObject::ProcessEvent(Func, &Parms);
}


// Function EquipList.EquipList_C.SetData
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FOwnItemInfo>             InCostumeOwnItemInfoList                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<struct FOwnItemInfo>             InUnderWearOwnItemInfoList                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<struct FOwnItemInfo>             InAccesoriesOwnItemInfoList                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FOwnItemInfo                     InMountImagine                                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UEquipList_C::SetData(const TArray<struct FOwnItemInfo>& InCostumeOwnItemInfoList, TArray<struct FOwnItemInfo>& InUnderWearOwnItemInfoList, TArray<struct FOwnItemInfo>& InAccesoriesOwnItemInfoList, const struct FOwnItemInfo& InMountImagine)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipList_C", "SetData");

	Params::EquipList_C_SetData Parms{};

	Parms.InCostumeOwnItemInfoList = std::move(InCostumeOwnItemInfoList);
	Parms.InUnderWearOwnItemInfoList = std::move(InUnderWearOwnItemInfoList);
	Parms.InAccesoriesOwnItemInfoList = std::move(InAccesoriesOwnItemInfoList);
	Parms.InMountImagine = std::move(InMountImagine);

	UObject::ProcessEvent(Func, &Parms);

	InUnderWearOwnItemInfoList = std::move(Parms.InUnderWearOwnItemInfoList);
	InAccesoriesOwnItemInfoList = std::move(Parms.InAccesoriesOwnItemInfoList);
}


// Function EquipList.EquipList_C.SetArmorData
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FOwnItemInfo>             InOwnItemList                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UArmorList_C*                     InArmorList                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEquipList_C::SetArmorData(TArray<struct FOwnItemInfo>& InOwnItemList, class UArmorList_C* InArmorList)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipList_C", "SetArmorData");

	Params::EquipList_C_SetArmorData Parms{};

	Parms.InOwnItemList = std::move(InOwnItemList);
	Parms.InArmorList = InArmorList;

	UObject::ProcessEvent(Func, &Parms);

	InOwnItemList = std::move(Parms.InOwnItemList);
}


// Function EquipList.EquipList_C.SetCostumeData
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FOwnItemInfo>             InCostumeData                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UEquipList_C::SetCostumeData(TArray<struct FOwnItemInfo>& InCostumeData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipList_C", "SetCostumeData");

	Params::EquipList_C_SetCostumeData Parms{};

	Parms.InCostumeData = std::move(InCostumeData);

	UObject::ProcessEvent(Func, &Parms);

	InCostumeData = std::move(Parms.InCostumeData);
}


// Function EquipList.EquipList_C.SetUnderWearData
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FOwnItemInfo>             InUnderWearData                                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UEquipList_C::SetUnderWearData(TArray<struct FOwnItemInfo>& InUnderWearData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipList_C", "SetUnderWearData");

	Params::EquipList_C_SetUnderWearData Parms{};

	Parms.InUnderWearData = std::move(InUnderWearData);

	UObject::ProcessEvent(Func, &Parms);

	InUnderWearData = std::move(Parms.InUnderWearData);
}


// Function EquipList.EquipList_C.SetAccessoriesData
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FOwnItemInfo>             InAccessoriesData                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UEquipList_C::SetAccessoriesData(TArray<struct FOwnItemInfo>& InAccessoriesData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipList_C", "SetAccessoriesData");

	Params::EquipList_C_SetAccessoriesData Parms{};

	Parms.InAccessoriesData = std::move(InAccessoriesData);

	UObject::ProcessEvent(Func, &Parms);

	InAccessoriesData = std::move(Parms.InAccessoriesData);
}


// Function EquipList.EquipList_C.SetMountImagineData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOwnItemInfo                     InMountImagine                                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UEquipList_C::SetMountImagineData(const struct FOwnItemInfo& InMountImagine)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipList_C", "SetMountImagineData");

	Params::EquipList_C_SetMountImagineData Parms{};

	Parms.InMountImagine = std::move(InMountImagine);

	UObject::ProcessEvent(Func, &Parms);
}


// Function EquipList.EquipList_C.SetOtherPCData
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FOwnItemInfo>             InEquipCostumesOwnItemInfoList                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<struct FOwnItemInfo>             InEquipAccessoriesOwnItemInfoList                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<struct FOwnItemInfo>             InEquipUnderwearOwnItemInfoList                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FPlayerProfileMenuDetailCharaEquipInfoInCharaEquipInfo                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FOwnItemInfo                     InEquipMountImagineOwnItemInfo                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UEquipList_C::SetOtherPCData(TArray<struct FOwnItemInfo>& InEquipCostumesOwnItemInfoList, TArray<struct FOwnItemInfo>& InEquipAccessoriesOwnItemInfoList, TArray<struct FOwnItemInfo>& InEquipUnderwearOwnItemInfoList, const struct FPlayerProfileMenuDetailCharaEquipInfo& InCharaEquipInfo, const struct FOwnItemInfo& InEquipMountImagineOwnItemInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipList_C", "SetOtherPCData");

	Params::EquipList_C_SetOtherPCData Parms{};

	Parms.InEquipCostumesOwnItemInfoList = std::move(InEquipCostumesOwnItemInfoList);
	Parms.InEquipAccessoriesOwnItemInfoList = std::move(InEquipAccessoriesOwnItemInfoList);
	Parms.InEquipUnderwearOwnItemInfoList = std::move(InEquipUnderwearOwnItemInfoList);
	Parms.InCharaEquipInfo = std::move(InCharaEquipInfo);
	Parms.InEquipMountImagineOwnItemInfo = std::move(InEquipMountImagineOwnItemInfo);

	UObject::ProcessEvent(Func, &Parms);

	InEquipCostumesOwnItemInfoList = std::move(Parms.InEquipCostumesOwnItemInfoList);
	InEquipAccessoriesOwnItemInfoList = std::move(Parms.InEquipAccessoriesOwnItemInfoList);
	InEquipUnderwearOwnItemInfoList = std::move(Parms.InEquipUnderwearOwnItemInfoList);
}


// Function EquipList.EquipList_C.SetOtherPCAccessoriesData
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FOwnItemInfo>             InAccessoriesData                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FPlayerProfileMenuDetailCharaEquipInfoInCharaEquipInfo                                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UEquipList_C::SetOtherPCAccessoriesData(TArray<struct FOwnItemInfo>& InAccessoriesData, const struct FPlayerProfileMenuDetailCharaEquipInfo& InCharaEquipInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipList_C", "SetOtherPCAccessoriesData");

	Params::EquipList_C_SetOtherPCAccessoriesData Parms{};

	Parms.InAccessoriesData = std::move(InAccessoriesData);
	Parms.InCharaEquipInfo = std::move(InCharaEquipInfo);

	UObject::ProcessEvent(Func, &Parms);

	InAccessoriesData = std::move(Parms.InAccessoriesData);
}

}

