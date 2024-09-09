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
	 * 		Name   -> Function RecepiListItemBtn.RecepiListItemBtn_C.UpdateNewMark
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            RecepiId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URecepiListItemBtn_C::UpdateNewMark(int32_t RecepiId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RecepiListItemBtn.RecepiListItemBtn_C.UpdateNewMark");
		
		URecepiListItemBtn_C_UpdateNewMark_Params params {};
		params.RecepiId = RecepiId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RecepiListItemBtn.RecepiListItemBtn_C.UpdateTimeLimit
	 * 		Flags  -> ()
	 */
	void URecepiListItemBtn_C::UpdateTimeLimit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RecepiListItemBtn.RecepiListItemBtn_C.UpdateTimeLimit");
		
		URecepiListItemBtn_C_UpdateTimeLimit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RecepiListItemBtn.RecepiListItemBtn_C.SetSelectedVisible
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bVisible                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void URecepiListItemBtn_C::SetSelectedVisible(bool bVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RecepiListItemBtn.RecepiListItemBtn_C.SetSelectedVisible");
		
		URecepiListItemBtn_C_SetSelectedVisible_Params params {};
		params.bVisible = bVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RecepiListItemBtn.RecepiListItemBtn_C.Unbind Wishlist Update
	 * 		Flags  -> ()
	 */
	void URecepiListItemBtn_C::UnbindWishlistUpdate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RecepiListItemBtn.RecepiListItemBtn_C.Unbind Wishlist Update");
		
		URecepiListItemBtn_C_UnbindWishlistUpdate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RecepiListItemBtn.RecepiListItemBtn_C.Bind Wishlist Update
	 * 		Flags  -> ()
	 */
	void URecepiListItemBtn_C::BindWishlistUpdate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RecepiListItemBtn.RecepiListItemBtn_C.Bind Wishlist Update");
		
		URecepiListItemBtn_C_BindWishlistUpdate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RecepiListItemBtn.RecepiListItemBtn_C.UpdateRewardBoost
	 * 		Flags  -> ()
	 */
	void URecepiListItemBtn_C::UpdateRewardBoost()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RecepiListItemBtn.RecepiListItemBtn_C.UpdateRewardBoost");
		
		URecepiListItemBtn_C_UpdateRewardBoost_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RecepiListItemBtn.RecepiListItemBtn_C.GetRecepi
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FMasterImagineRecepi                        Master                                                     (Parm, OutParm)
	 * 		bool                                               bIsCrafted                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void URecepiListItemBtn_C::GetRecepi(struct FMasterImagineRecepi* Master, bool* bIsCrafted)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RecepiListItemBtn.RecepiListItemBtn_C.GetRecepi");
		
		URecepiListItemBtn_C_GetRecepi_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Master != nullptr)
			*Master = params.Master;
		if (bIsCrafted != nullptr)
			*bIsCrafted = params.bIsCrafted;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RecepiListItemBtn.RecepiListItemBtn_C.Construct
	 * 		Flags  -> ()
	 */
	void URecepiListItemBtn_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RecepiListItemBtn.RecepiListItemBtn_C.Construct");
		
		URecepiListItemBtn_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RecepiListItemBtn.RecepiListItemBtn_C.BndEvt__Btn_Select_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void URecepiListItemBtn_C::BndEvt__Btn_Select_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RecepiListItemBtn.RecepiListItemBtn_C.BndEvt__Btn_Select_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		URecepiListItemBtn_C_BndEvt__Btn_Select_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RecepiListItemBtn.RecepiListItemBtn_C.Set RecepiData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FMasterImagineRecepi                        ImagineRecpiData                                           (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void URecepiListItemBtn_C::SetRecepiData(const struct FMasterImagineRecepi& ImagineRecpiData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RecepiListItemBtn.RecepiListItemBtn_C.Set RecepiData");
		
		URecepiListItemBtn_C_SetRecepiData_Params params {};
		params.ImagineRecpiData = ImagineRecpiData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RecepiListItemBtn.RecepiListItemBtn_C.ApplyImagineData
	 * 		Flags  -> ()
	 */
	void URecepiListItemBtn_C::ApplyImagineData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RecepiListItemBtn.RecepiListItemBtn_C.ApplyImagineData");
		
		URecepiListItemBtn_C_ApplyImagineData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RecepiListItemBtn.RecepiListItemBtn_C.Set Crafted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsCrafted                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void URecepiListItemBtn_C::SetCrafted(bool IsCrafted)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RecepiListItemBtn.RecepiListItemBtn_C.Set Crafted");
		
		URecepiListItemBtn_C_SetCrafted_Params params {};
		params.IsCrafted = IsCrafted;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RecepiListItemBtn.RecepiListItemBtn_C.Check Adv Rank Reached
	 * 		Flags  -> ()
	 */
	void URecepiListItemBtn_C::CheckAdvRankReached()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RecepiListItemBtn.RecepiListItemBtn_C.Check Adv Rank Reached");
		
		URecepiListItemBtn_C_CheckAdvRankReached_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RecepiListItemBtn.RecepiListItemBtn_C.OnRecepiUpdated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            RecepiId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URecepiListItemBtn_C::OnRecepiUpdated(int32_t RecepiId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RecepiListItemBtn.RecepiListItemBtn_C.OnRecepiUpdated");
		
		URecepiListItemBtn_C_OnRecepiUpdated_Params params {};
		params.RecepiId = RecepiId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RecepiListItemBtn.RecepiListItemBtn_C.Construct_RecepiAttach
	 * 		Flags  -> ()
	 */
	void URecepiListItemBtn_C::Construct_RecepiAttach()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RecepiListItemBtn.RecepiListItemBtn_C.Construct_RecepiAttach");
		
		URecepiListItemBtn_C_Construct_RecepiAttach_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RecepiListItemBtn.RecepiListItemBtn_C.Destruct_RecepiAttach
	 * 		Flags  -> ()
	 */
	void URecepiListItemBtn_C::Destruct_RecepiAttach()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RecepiListItemBtn.RecepiListItemBtn_C.Destruct_RecepiAttach");
		
		URecepiListItemBtn_C_Destruct_RecepiAttach_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RecepiListItemBtn.RecepiListItemBtn_C.Destruct
	 * 		Flags  -> ()
	 */
	void URecepiListItemBtn_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RecepiListItemBtn.RecepiListItemBtn_C.Destruct");
		
		URecepiListItemBtn_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RecepiListItemBtn.RecepiListItemBtn_C.Bind Boost
	 * 		Flags  -> ()
	 */
	void URecepiListItemBtn_C::BindBoost()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RecepiListItemBtn.RecepiListItemBtn_C.Bind Boost");
		
		URecepiListItemBtn_C_BindBoost_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RecepiListItemBtn.RecepiListItemBtn_C.Unbind Boost
	 * 		Flags  -> ()
	 */
	void URecepiListItemBtn_C::UnbindBoost()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RecepiListItemBtn.RecepiListItemBtn_C.Unbind Boost");
		
		URecepiListItemBtn_C_UnbindBoost_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RecepiListItemBtn.RecepiListItemBtn_C.OnUpdateReward
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Sender                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     Param                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URecepiListItemBtn_C::OnUpdateReward(class UObject* Sender, class UObject* Param)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RecepiListItemBtn.RecepiListItemBtn_C.OnUpdateReward");
		
		URecepiListItemBtn_C_OnUpdateReward_Params params {};
		params.Sender = Sender;
		params.Param = Param;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RecepiListItemBtn.RecepiListItemBtn_C.Update Wishlist
	 * 		Flags  -> ()
	 */
	void URecepiListItemBtn_C::UpdateWishlist()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RecepiListItemBtn.RecepiListItemBtn_C.Update Wishlist");
		
		URecepiListItemBtn_C_UpdateWishlist_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RecepiListItemBtn.RecepiListItemBtn_C.ExecuteUbergraph_RecepiListItemBtn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URecepiListItemBtn_C::ExecuteUbergraph_RecepiListItemBtn(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RecepiListItemBtn.RecepiListItemBtn_C.ExecuteUbergraph_RecepiListItemBtn");
		
		URecepiListItemBtn_C_ExecuteUbergraph_RecepiListItemBtn_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RecepiListItemBtn.RecepiListItemBtn_C.OnSelect__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FMasterImagineRecepi                        MasterData                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class URecepiListItemBtn_C*                        SelectedItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URecepiListItemBtn_C::OnSelect__DelegateSignature(const struct FMasterImagineRecepi& MasterData, class URecepiListItemBtn_C* SelectedItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RecepiListItemBtn.RecepiListItemBtn_C.OnSelect__DelegateSignature");
		
		URecepiListItemBtn_C_OnSelect__DelegateSignature_Params params {};
		params.MasterData = MasterData;
		params.SelectedItem = SelectedItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URecepiListItemBtn_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URecepiListItemBtn_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass RecepiListItemBtn.RecepiListItemBtn_C");
		return ptr;
	}

}


