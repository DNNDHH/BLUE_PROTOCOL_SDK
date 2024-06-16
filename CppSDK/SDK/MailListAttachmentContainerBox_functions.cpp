#pragma once

 

// Package: MailListAttachmentContainerBox

#include "Basic.hpp"

#include "MailListAttachmentContainerBox_classes.hpp"
#include "MailListAttachmentContainerBox_parameters.hpp"


namespace SDK
{

// Function MailListAttachmentContainerBox.MailListAttachmentContainerBox_C.ExecuteUbergraph_MailListAttachmentContainerBox
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMailListAttachmentContainerBox_C::ExecuteUbergraph_MailListAttachmentContainerBox(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MailListAttachmentContainerBox_C", "ExecuteUbergraph_MailListAttachmentContainerBox");

	Params::MailListAttachmentContainerBox_C_ExecuteUbergraph_MailListAttachmentContainerBox Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MailListAttachmentContainerBox.MailListAttachmentContainerBox_C.AddVanishData
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBMailAttachment                VanishItem                                             (BlueprintVisible, BlueprintReadOnly, Parm)

void UMailListAttachmentContainerBox_C::AddVanishData(const struct FSBMailAttachment& VanishItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MailListAttachmentContainerBox_C", "AddVanishData");

	Params::MailListAttachmentContainerBox_C_AddVanishData Parms{};

	Parms.VanishItem = std::move(VanishItem);

	UObject::ProcessEvent(Func, &Parms);
}


// Function MailListAttachmentContainerBox.MailListAttachmentContainerBox_C.AddSallItemInfo
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOwnItemInfo                     SallInfo                                               (BlueprintVisible, BlueprintReadOnly, Parm)

void UMailListAttachmentContainerBox_C::AddSallItemInfo(const struct FOwnItemInfo& SallInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MailListAttachmentContainerBox_C", "AddSallItemInfo");

	Params::MailListAttachmentContainerBox_C_AddSallItemInfo Parms{};

	Parms.SallInfo = std::move(SallInfo);

	UObject::ProcessEvent(Func, &Parms);
}


// Function MailListAttachmentContainerBox.MailListAttachmentContainerBox_C.Set Other
// (BlueprintCallable, BlueprintEvent)

void UMailListAttachmentContainerBox_C::Set_Other()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MailListAttachmentContainerBox_C", "Set Other");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MailListAttachmentContainerBox.MailListAttachmentContainerBox_C.Set Bag
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bEquip                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMailListAttachmentContainerBox_C::Set_Bag(bool bEquip)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MailListAttachmentContainerBox_C", "Set Bag");

	Params::MailListAttachmentContainerBox_C_Set_Bag Parms{};

	Parms.bEquip = bEquip;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MailListAttachmentContainerBox.MailListAttachmentContainerBox_C.Set Storage
// (BlueprintCallable, BlueprintEvent)

void UMailListAttachmentContainerBox_C::Set_Storage()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MailListAttachmentContainerBox_C", "Set Storage");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MailListAttachmentContainerBox.MailListAttachmentContainerBox_C.Add RewardType
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBMailAttachment                NewItem                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                                    IsNew                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMailListAttachmentContainerBox_C::Add_RewardType(const struct FSBMailAttachment& NewItem, bool IsNew)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MailListAttachmentContainerBox_C", "Add RewardType");

	Params::MailListAttachmentContainerBox_C_Add_RewardType Parms{};

	Parms.NewItem = std::move(NewItem);
	Parms.IsNew = IsNew;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MailListAttachmentContainerBox.MailListAttachmentContainerBox_C.AddItemInfo
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOwnItemInfo                     NewItem                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UMailListAttachmentContainerBox_C::AddItemInfo(const struct FOwnItemInfo& NewItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MailListAttachmentContainerBox_C", "AddItemInfo");

	Params::MailListAttachmentContainerBox_C_AddItemInfo Parms{};

	Parms.NewItem = std::move(NewItem);

	UObject::ProcessEvent(Func, &Parms);
}


// Function MailListAttachmentContainerBox.MailListAttachmentContainerBox_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMailListAttachmentContainerBox_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MailListAttachmentContainerBox_C", "PreConstruct");

	Params::MailListAttachmentContainerBox_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MailListAttachmentContainerBox.MailListAttachmentContainerBox_C.GenerateItemIcons
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UMailListAttachmentContainerBox_C::GenerateItemIcons()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MailListAttachmentContainerBox_C", "GenerateItemIcons");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MailListAttachmentContainerBox.MailListAttachmentContainerBox_C.CreateIcon
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   A                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSBMailAttachment                Attachment                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// class UCommonIcon_C*                    Icon                                                   (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMailListAttachmentContainerBox_C::CreateIcon(int32 A, const struct FSBMailAttachment& Attachment, class UCommonIcon_C** Icon)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MailListAttachmentContainerBox_C", "CreateIcon");

	Params::MailListAttachmentContainerBox_C_CreateIcon Parms{};

	Parms.A = A;
	Parms.Attachment = std::move(Attachment);

	UObject::ProcessEvent(Func, &Parms);

	if (Icon != nullptr)
		*Icon = Parms.Icon;
}


// Function MailListAttachmentContainerBox.MailListAttachmentContainerBox_C.SetMailExtraData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonIcon_C*                    Icon                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSBMailAttachment                AttachmentData                                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UMailListAttachmentContainerBox_C::SetMailExtraData(class UCommonIcon_C* Icon, const struct FSBMailAttachment& AttachmentData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MailListAttachmentContainerBox_C", "SetMailExtraData");

	Params::MailListAttachmentContainerBox_C_SetMailExtraData Parms{};

	Parms.Icon = Icon;
	Parms.AttachmentData = std::move(AttachmentData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function MailListAttachmentContainerBox.MailListAttachmentContainerBox_C.ItemTooltipCheck
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOwnItemInfo                     ItemInfo                                               (BlueprintVisible, BlueprintReadOnly, Parm)
// class UCommonIcon_C*                    Icon                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMailListAttachmentContainerBox_C::ItemTooltipCheck(const struct FOwnItemInfo& ItemInfo, class UCommonIcon_C* Icon)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MailListAttachmentContainerBox_C", "ItemTooltipCheck");

	Params::MailListAttachmentContainerBox_C_ItemTooltipCheck Parms{};

	Parms.ItemInfo = std::move(ItemInfo);
	Parms.Icon = Icon;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MailListAttachmentContainerBox.MailListAttachmentContainerBox_C.SetSoldProfit
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonIcon_C*                    Icon                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSBMailAttachment                MailData                                               (BlueprintVisible, BlueprintReadOnly, Parm)

void UMailListAttachmentContainerBox_C::SetSoldProfit(class UCommonIcon_C* Icon, const struct FSBMailAttachment& MailData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MailListAttachmentContainerBox_C", "SetSoldProfit");

	Params::MailListAttachmentContainerBox_C_SetSoldProfit Parms{};

	Parms.Icon = Icon;
	Parms.MailData = std::move(MailData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function MailListAttachmentContainerBox.MailListAttachmentContainerBox_C.ItemTypeToAttachmentType
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EItemType                               InItemType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESBRewardItemType                       OutAttachmentType                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMailListAttachmentContainerBox_C::ItemTypeToAttachmentType(EItemType InItemType, ESBRewardItemType* OutAttachmentType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MailListAttachmentContainerBox_C", "ItemTypeToAttachmentType");

	Params::MailListAttachmentContainerBox_C_ItemTypeToAttachmentType Parms{};

	Parms.InItemType = InItemType;

	UObject::ProcessEvent(Func, &Parms);

	if (OutAttachmentType != nullptr)
		*OutAttachmentType = Parms.OutAttachmentType;
}


// Function MailListAttachmentContainerBox.MailListAttachmentContainerBox_C.UpdateVanishedTooltip
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonIcon_C*                    Icon                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSBMailAttachment                AttachmentData                                         (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                                    IsTooltipChange                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMailListAttachmentContainerBox_C::UpdateVanishedTooltip(class UCommonIcon_C* Icon, const struct FSBMailAttachment& AttachmentData, bool* IsTooltipChange)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MailListAttachmentContainerBox_C", "UpdateVanishedTooltip");

	Params::MailListAttachmentContainerBox_C_UpdateVanishedTooltip Parms{};

	Parms.Icon = Icon;
	Parms.AttachmentData = std::move(AttachmentData);

	UObject::ProcessEvent(Func, &Parms);

	if (IsTooltipChange != nullptr)
		*IsTooltipChange = Parms.IsTooltipChange;
}


// Function MailListAttachmentContainerBox.MailListAttachmentContainerBox_C.IsDuplicateType
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESBRewardItemType                       ItemType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Duplicate                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMailListAttachmentContainerBox_C::IsDuplicateType(ESBRewardItemType ItemType, bool* Duplicate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MailListAttachmentContainerBox_C", "IsDuplicateType");

	Params::MailListAttachmentContainerBox_C_IsDuplicateType Parms{};

	Parms.ItemType = ItemType;

	UObject::ProcessEvent(Func, &Parms);

	if (Duplicate != nullptr)
		*Duplicate = Parms.Duplicate;
}

}

