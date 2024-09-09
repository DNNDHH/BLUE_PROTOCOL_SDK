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
	 * 		Name   -> Function ShortcutRingIcon_Basic.ShortcutRingIcon_Basic_C.OnExecuteError
	 * 		Flags  -> ()
	 */
	void UShortcutRingIcon_Basic_C::OnExecuteError()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShortcutRingIcon_Basic.ShortcutRingIcon_Basic_C.OnExecuteError");
		
		UShortcutRingIcon_Basic_C_OnExecuteError_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShortcutRingIcon_Basic.ShortcutRingIcon_Basic_C.OnSetVisibleShortcutIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InVisible                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UShortcutRingIcon_Basic_C::OnSetVisibleShortcutIcon(bool InVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShortcutRingIcon_Basic.ShortcutRingIcon_Basic_C.OnSetVisibleShortcutIcon");
		
		UShortcutRingIcon_Basic_C_OnSetVisibleShortcutIcon_Params params {};
		params.InVisible = InVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShortcutRingIcon_Basic.ShortcutRingIcon_Basic_C.OnSetEnableToolTip
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InEnable                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UShortcutRingIcon_Basic_C::OnSetEnableToolTip(bool InEnable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShortcutRingIcon_Basic.ShortcutRingIcon_Basic_C.OnSetEnableToolTip");
		
		UShortcutRingIcon_Basic_C_OnSetEnableToolTip_Params params {};
		params.InEnable = InEnable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShortcutRingIcon_Basic.ShortcutRingIcon_Basic_C.OnSetCoolTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsShow                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UShortcutRingIcon_Basic_C::OnSetCoolTime(bool InIsShow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShortcutRingIcon_Basic.ShortcutRingIcon_Basic_C.OnSetCoolTime");
		
		UShortcutRingIcon_Basic_C_OnSetCoolTime_Params params {};
		params.InIsShow = InIsShow;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShortcutRingIcon_Basic.ShortcutRingIcon_Basic_C.OnSetGrayOut
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InGrayOut                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UShortcutRingIcon_Basic_C::OnSetGrayOut(bool InGrayOut)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShortcutRingIcon_Basic.ShortcutRingIcon_Basic_C.OnSetGrayOut");
		
		UShortcutRingIcon_Basic_C_OnSetGrayOut_Params params {};
		params.InGrayOut = InGrayOut;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShortcutRingIcon_Basic.ShortcutRingIcon_Basic_C.OnExecuteSupply
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InItemIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESBItemUseStatus                                   InItemUseStatus                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UShortcutRingIcon_Basic_C::OnExecuteSupply(int32_t InItemIndex, ESBItemUseStatus InItemUseStatus)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShortcutRingIcon_Basic.ShortcutRingIcon_Basic_C.OnExecuteSupply");
		
		UShortcutRingIcon_Basic_C_OnExecuteSupply_Params params {};
		params.InItemIndex = InItemIndex;
		params.InItemUseStatus = InItemUseStatus;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShortcutRingIcon_Basic.ShortcutRingIcon_Basic_C.OnExecuteOwnItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InUniqueId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		int32_t                                            InItemIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESBItemUseStatus                                   InItemUseStatus                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UShortcutRingIcon_Basic_C::OnExecuteOwnItem(const class FString& InUniqueId, int32_t InItemIndex, ESBItemUseStatus InItemUseStatus)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShortcutRingIcon_Basic.ShortcutRingIcon_Basic_C.OnExecuteOwnItem");
		
		UShortcutRingIcon_Basic_C_OnExecuteOwnItem_Params params {};
		params.InUniqueId = InUniqueId;
		params.InItemIndex = InItemIndex;
		params.InItemUseStatus = InItemUseStatus;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShortcutRingIcon_Basic.ShortcutRingIcon_Basic_C.OnSetSupply
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InItemIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InItemAmount                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UShortcutRingIcon_Basic_C::OnSetSupply(int32_t InItemIndex, int32_t InItemAmount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShortcutRingIcon_Basic.ShortcutRingIcon_Basic_C.OnSetSupply");
		
		UShortcutRingIcon_Basic_C_OnSetSupply_Params params {};
		params.InItemIndex = InItemIndex;
		params.InItemAmount = InItemAmount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShortcutRingIcon_Basic.ShortcutRingIcon_Basic_C.OnSetStamp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InStampId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UShortcutRingIcon_Basic_C::OnSetStamp(const class FString& InStampId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShortcutRingIcon_Basic.ShortcutRingIcon_Basic_C.OnSetStamp");
		
		UShortcutRingIcon_Basic_C_OnSetStamp_Params params {};
		params.InStampId = InStampId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShortcutRingIcon_Basic.ShortcutRingIcon_Basic_C.OnSetEmotion
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InEmotionId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UShortcutRingIcon_Basic_C::OnSetEmotion(const class FString& InEmotionId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShortcutRingIcon_Basic.ShortcutRingIcon_Basic_C.OnSetEmotion");
		
		UShortcutRingIcon_Basic_C_OnSetEmotion_Params params {};
		params.InEmotionId = InEmotionId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShortcutRingIcon_Basic.ShortcutRingIcon_Basic_C.OnSetOwnItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InItemIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UShortcutRingIcon_Basic_C::OnSetOwnItem(int32_t InItemIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShortcutRingIcon_Basic.ShortcutRingIcon_Basic_C.OnSetOwnItem");
		
		UShortcutRingIcon_Basic_C_OnSetOwnItem_Params params {};
		params.InItemIndex = InItemIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShortcutRingIcon_Basic.ShortcutRingIcon_Basic_C.OnClearBP
	 * 		Flags  -> ()
	 */
	void UShortcutRingIcon_Basic_C::OnClearBP()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShortcutRingIcon_Basic.ShortcutRingIcon_Basic_C.OnClearBP");
		
		UShortcutRingIcon_Basic_C_OnClearBP_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShortcutRingIcon_Basic.ShortcutRingIcon_Basic_C.PlayAnimPressed
	 * 		Flags  -> ()
	 */
	void UShortcutRingIcon_Basic_C::PlayAnimPressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShortcutRingIcon_Basic.ShortcutRingIcon_Basic_C.PlayAnimPressed");
		
		UShortcutRingIcon_Basic_C_PlayAnimPressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShortcutRingIcon_Basic.ShortcutRingIcon_Basic_C.ItemUseAfter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InRetCode                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FOwnItemInfo>                        InDirtyItems                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UShortcutRingIcon_Basic_C::ItemUseAfter(int32_t InRetCode, TArray<struct FOwnItemInfo> InDirtyItems)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShortcutRingIcon_Basic.ShortcutRingIcon_Basic_C.ItemUseAfter");
		
		UShortcutRingIcon_Basic_C_ItemUseAfter_Params params {};
		params.InRetCode = InRetCode;
		params.InDirtyItems = InDirtyItems;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShortcutRingIcon_Basic.ShortcutRingIcon_Basic_C.BindOnSaveItemStorage
	 * 		Flags  -> ()
	 */
	void UShortcutRingIcon_Basic_C::BindOnSaveItemStorage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShortcutRingIcon_Basic.ShortcutRingIcon_Basic_C.BindOnSaveItemStorage");
		
		UShortcutRingIcon_Basic_C_BindOnSaveItemStorage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShortcutRingIcon_Basic.ShortcutRingIcon_Basic_C.UnbindOnSaveItemStorage
	 * 		Flags  -> ()
	 */
	void UShortcutRingIcon_Basic_C::UnbindOnSaveItemStorage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShortcutRingIcon_Basic.ShortcutRingIcon_Basic_C.UnbindOnSaveItemStorage");
		
		UShortcutRingIcon_Basic_C_UnbindOnSaveItemStorage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShortcutRingIcon_Basic.ShortcutRingIcon_Basic_C.OnMouseEnter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UShortcutRingIcon_Basic_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShortcutRingIcon_Basic.ShortcutRingIcon_Basic_C.OnMouseEnter");
		
		UShortcutRingIcon_Basic_C_OnMouseEnter_Params params {};
		params.MyGeometry = MyGeometry;
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShortcutRingIcon_Basic.ShortcutRingIcon_Basic_C.OnMouseLeave
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UShortcutRingIcon_Basic_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShortcutRingIcon_Basic.ShortcutRingIcon_Basic_C.OnMouseLeave");
		
		UShortcutRingIcon_Basic_C_OnMouseLeave_Params params {};
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShortcutRingIcon_Basic.ShortcutRingIcon_Basic_C.ExecuteUbergraph_ShortcutRingIcon_Basic
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UShortcutRingIcon_Basic_C::ExecuteUbergraph_ShortcutRingIcon_Basic(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShortcutRingIcon_Basic.ShortcutRingIcon_Basic_C.ExecuteUbergraph_ShortcutRingIcon_Basic");
		
		UShortcutRingIcon_Basic_C_ExecuteUbergraph_ShortcutRingIcon_Basic_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UShortcutRingIcon_Basic_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UShortcutRingIcon_Basic_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ShortcutRingIcon_Basic.ShortcutRingIcon_Basic_C");
		return ptr;
	}

}


