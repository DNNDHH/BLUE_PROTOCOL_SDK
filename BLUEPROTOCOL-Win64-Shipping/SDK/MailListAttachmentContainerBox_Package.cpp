/**
 * Name: BLUEPROTOCOL-Win64-Shipping
 * Version: 1.6.0
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MailListAttachmentContainerBox.MailListAttachmentContainerBox_C.Set OrnamentStorage
	 * 		Flags  -> ()
	 */
	void UMailListAttachmentContainerBox_C::SetOrnamentStorage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MailListAttachmentContainerBox.MailListAttachmentContainerBox_C.Set OrnamentStorage");
		
		UMailListAttachmentContainerBox_C_SetOrnamentStorage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MailListAttachmentContainerBox.MailListAttachmentContainerBox_C.AddSallItemInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FOwnItemInfo                                SallInfo                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UMailListAttachmentContainerBox_C::AddSallItemInfo(const struct FOwnItemInfo& SallInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MailListAttachmentContainerBox.MailListAttachmentContainerBox_C.AddSallItemInfo");
		
		UMailListAttachmentContainerBox_C_AddSallItemInfo_Params params {};
		params.SallInfo = SallInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MailListAttachmentContainerBox.MailListAttachmentContainerBox_C.Add RewardType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBMailAttachment                           NewItem                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               IsNew                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMailListAttachmentContainerBox_C::AddRewardType(const struct FSBMailAttachment& NewItem, bool IsNew)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MailListAttachmentContainerBox.MailListAttachmentContainerBox_C.Add RewardType");
		
		UMailListAttachmentContainerBox_C_AddRewardType_Params params {};
		params.NewItem = NewItem;
		params.IsNew = IsNew;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MailListAttachmentContainerBox.MailListAttachmentContainerBox_C.AddItemInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FOwnItemInfo                                NewItem                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UMailListAttachmentContainerBox_C::AddItemInfo(const struct FOwnItemInfo& NewItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MailListAttachmentContainerBox.MailListAttachmentContainerBox_C.AddItemInfo");
		
		UMailListAttachmentContainerBox_C_AddItemInfo_Params params {};
		params.NewItem = NewItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MailListAttachmentContainerBox.MailListAttachmentContainerBox_C.AddVanishData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBMailAttachment                           VanishItem                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UMailListAttachmentContainerBox_C::AddVanishData(const struct FSBMailAttachment& VanishItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MailListAttachmentContainerBox.MailListAttachmentContainerBox_C.AddVanishData");
		
		UMailListAttachmentContainerBox_C_AddVanishData_Params params {};
		params.VanishItem = VanishItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MailListAttachmentContainerBox.MailListAttachmentContainerBox_C.Set Other
	 * 		Flags  -> ()
	 */
	void UMailListAttachmentContainerBox_C::SetOther()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MailListAttachmentContainerBox.MailListAttachmentContainerBox_C.Set Other");
		
		UMailListAttachmentContainerBox_C_SetOther_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MailListAttachmentContainerBox.MailListAttachmentContainerBox_C.Set Bag
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bEquip                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMailListAttachmentContainerBox_C::SetBag(bool bEquip)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MailListAttachmentContainerBox.MailListAttachmentContainerBox_C.Set Bag");
		
		UMailListAttachmentContainerBox_C_SetBag_Params params {};
		params.bEquip = bEquip;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MailListAttachmentContainerBox.MailListAttachmentContainerBox_C.Set Storage
	 * 		Flags  -> ()
	 */
	void UMailListAttachmentContainerBox_C::SetStorage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MailListAttachmentContainerBox.MailListAttachmentContainerBox_C.Set Storage");
		
		UMailListAttachmentContainerBox_C_SetStorage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MailListAttachmentContainerBox.MailListAttachmentContainerBox_C.SetStorageText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InText                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMailListAttachmentContainerBox_C::SetStorageText(const class FText& InText, int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MailListAttachmentContainerBox.MailListAttachmentContainerBox_C.SetStorageText");
		
		UMailListAttachmentContainerBox_C_SetStorageText_Params params {};
		params.InText = InText;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MailListAttachmentContainerBox.MailListAttachmentContainerBox_C.IsDuplicateType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBRewardItemType                                  ItemType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Duplicate                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMailListAttachmentContainerBox_C::IsDuplicateType(ESBRewardItemType ItemType, bool* Duplicate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MailListAttachmentContainerBox.MailListAttachmentContainerBox_C.IsDuplicateType");
		
		UMailListAttachmentContainerBox_C_IsDuplicateType_Params params {};
		params.ItemType = ItemType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Duplicate != nullptr)
			*Duplicate = params.Duplicate;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MailListAttachmentContainerBox.MailListAttachmentContainerBox_C.UpdateVanishedTooltip
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCommonIcon_C*                               Icon                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSBMailAttachment                           AttachmentData                                             (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               IsTooltipChange                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMailListAttachmentContainerBox_C::UpdateVanishedTooltip(class UCommonIcon_C* Icon, const struct FSBMailAttachment& AttachmentData, bool* IsTooltipChange)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MailListAttachmentContainerBox.MailListAttachmentContainerBox_C.UpdateVanishedTooltip");
		
		UMailListAttachmentContainerBox_C_UpdateVanishedTooltip_Params params {};
		params.Icon = Icon;
		params.AttachmentData = AttachmentData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsTooltipChange != nullptr)
			*IsTooltipChange = params.IsTooltipChange;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MailListAttachmentContainerBox.MailListAttachmentContainerBox_C.SetSoldProfit
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCommonIcon_C*                               Icon                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSBMailAttachment                           MailData                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UMailListAttachmentContainerBox_C::SetSoldProfit(class UCommonIcon_C* Icon, const struct FSBMailAttachment& MailData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MailListAttachmentContainerBox.MailListAttachmentContainerBox_C.SetSoldProfit");
		
		UMailListAttachmentContainerBox_C_SetSoldProfit_Params params {};
		params.Icon = Icon;
		params.MailData = MailData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MailListAttachmentContainerBox.MailListAttachmentContainerBox_C.ItemTooltipCheck
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FOwnItemInfo                                ItemInfo                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UCommonIcon_C*                               Icon                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMailListAttachmentContainerBox_C::ItemTooltipCheck(const struct FOwnItemInfo& ItemInfo, class UCommonIcon_C* Icon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MailListAttachmentContainerBox.MailListAttachmentContainerBox_C.ItemTooltipCheck");
		
		UMailListAttachmentContainerBox_C_ItemTooltipCheck_Params params {};
		params.ItemInfo = ItemInfo;
		params.Icon = Icon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MailListAttachmentContainerBox.MailListAttachmentContainerBox_C.SetMailExtraData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCommonIcon_C*                               Icon                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSBMailAttachment                           AttachmentData                                             (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UMailListAttachmentContainerBox_C::SetMailExtraData(class UCommonIcon_C* Icon, const struct FSBMailAttachment& AttachmentData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MailListAttachmentContainerBox.MailListAttachmentContainerBox_C.SetMailExtraData");
		
		UMailListAttachmentContainerBox_C_SetMailExtraData_Params params {};
		params.Icon = Icon;
		params.AttachmentData = AttachmentData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MailListAttachmentContainerBox.MailListAttachmentContainerBox_C.CreateIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            A                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSBMailAttachment                           Attachment                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UCommonIcon_C*                               Icon                                                       (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMailListAttachmentContainerBox_C::CreateIcon(int32_t A, const struct FSBMailAttachment& Attachment, class UCommonIcon_C** Icon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MailListAttachmentContainerBox.MailListAttachmentContainerBox_C.CreateIcon");
		
		UMailListAttachmentContainerBox_C_CreateIcon_Params params {};
		params.A = A;
		params.Attachment = Attachment;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Icon != nullptr)
			*Icon = params.Icon;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MailListAttachmentContainerBox.MailListAttachmentContainerBox_C.GenerateItemIcons
	 * 		Flags  -> ()
	 */
	void UMailListAttachmentContainerBox_C::GenerateItemIcons()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MailListAttachmentContainerBox.MailListAttachmentContainerBox_C.GenerateItemIcons");
		
		UMailListAttachmentContainerBox_C_GenerateItemIcons_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MailListAttachmentContainerBox.MailListAttachmentContainerBox_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMailListAttachmentContainerBox_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MailListAttachmentContainerBox.MailListAttachmentContainerBox_C.PreConstruct");
		
		UMailListAttachmentContainerBox_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MailListAttachmentContainerBox.MailListAttachmentContainerBox_C.ExecuteUbergraph_MailListAttachmentContainerBox
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMailListAttachmentContainerBox_C::ExecuteUbergraph_MailListAttachmentContainerBox(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MailListAttachmentContainerBox.MailListAttachmentContainerBox_C.ExecuteUbergraph_MailListAttachmentContainerBox");
		
		UMailListAttachmentContainerBox_C_ExecuteUbergraph_MailListAttachmentContainerBox_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMailListAttachmentContainerBox_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMailListAttachmentContainerBox_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MailListAttachmentContainerBox.MailListAttachmentContainerBox_C");
		return ptr;
	}

}


