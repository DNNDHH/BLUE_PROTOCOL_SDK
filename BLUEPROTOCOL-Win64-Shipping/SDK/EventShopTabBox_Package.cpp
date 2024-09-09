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
	 * 		Name   -> Function EventShopTabBox.EventShopTabBox_C.BtnLocked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               locked                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UEventShopTabBox_C::BtnLocked(bool locked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EventShopTabBox.EventShopTabBox_C.BtnLocked");
		
		UEventShopTabBox_C_BtnLocked_Params params {};
		params.locked = locked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EventShopTabBox.EventShopTabBox_C.CheckPagerBtn
	 * 		Flags  -> ()
	 */
	void UEventShopTabBox_C::CheckPagerBtn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EventShopTabBox.EventShopTabBox_C.CheckPagerBtn");
		
		UEventShopTabBox_C_CheckPagerBtn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EventShopTabBox.EventShopTabBox_C.SetBannerSelect
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UEventShopTabBox_Banner_C*                   Banner                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Force                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UEventShopTabBox_C::SetBannerSelect(class UEventShopTabBox_Banner_C* Banner, bool Force)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EventShopTabBox.EventShopTabBox_C.SetBannerSelect");
		
		UEventShopTabBox_C_SetBannerSelect_Params params {};
		params.Banner = Banner;
		params.Force = Force;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EventShopTabBox.EventShopTabBox_C.SetBannerEnable
	 * 		Flags  -> ()
	 */
	void UEventShopTabBox_C::SetBannerEnable()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EventShopTabBox.EventShopTabBox_C.SetBannerEnable");
		
		UEventShopTabBox_C_SetBannerEnable_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EventShopTabBox.EventShopTabBox_C.UpdateBannerInfo
	 * 		Flags  -> ()
	 */
	void UEventShopTabBox_C::UpdateBannerInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EventShopTabBox.EventShopTabBox_C.UpdateBannerInfo");
		
		UEventShopTabBox_C_UpdateBannerInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EventShopTabBox.EventShopTabBox_C.UpdateTabInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Prev                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Next                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            Click                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UEventShopTabBox_C::UpdateTabInfo(bool Prev, bool Next, int32_t Click)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EventShopTabBox.EventShopTabBox_C.UpdateTabInfo");
		
		UEventShopTabBox_C_UpdateTabInfo_Params params {};
		params.Prev = Prev;
		params.Next = Next;
		params.Click = Click;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EventShopTabBox.EventShopTabBox_C.CreateEventList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FSBEventShopMasterData>              EventList                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UEventShopTabBox_C::CreateEventList(TArray<struct FSBEventShopMasterData>* EventList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EventShopTabBox.EventShopTabBox_C.CreateEventList");
		
		UEventShopTabBox_C_CreateEventList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (EventList != nullptr)
			*EventList = params.EventList;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EventShopTabBox.EventShopTabBox_C.Initialize
	 * 		Flags  -> ()
	 */
	void UEventShopTabBox_C::Initialize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EventShopTabBox.EventShopTabBox_C.Initialize");
		
		UEventShopTabBox_C_Initialize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EventShopTabBox.EventShopTabBox_C.BndEvt__SBButton_Prev_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UEventShopTabBox_C::BndEvt__SBButton_Prev_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EventShopTabBox.EventShopTabBox_C.BndEvt__SBButton_Prev_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UEventShopTabBox_C_BndEvt__SBButton_Prev_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EventShopTabBox.EventShopTabBox_C.BndEvt__SBButton_Next_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UEventShopTabBox_C::BndEvt__SBButton_Next_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EventShopTabBox.EventShopTabBox_C.BndEvt__SBButton_Next_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");
		
		UEventShopTabBox_C_BndEvt__SBButton_Next_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EventShopTabBox.EventShopTabBox_C.BndEvt__EventShopTabBox_Banner_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UEventShopTabBox_C::BndEvt__EventShopTabBox_Banner_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EventShopTabBox.EventShopTabBox_C.BndEvt__EventShopTabBox_Banner_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature");
		
		UEventShopTabBox_C_BndEvt__EventShopTabBox_Banner_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EventShopTabBox.EventShopTabBox_C.BndEvt__Banner2_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UEventShopTabBox_C::BndEvt__Banner2_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EventShopTabBox.EventShopTabBox_C.BndEvt__Banner2_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature");
		
		UEventShopTabBox_C_BndEvt__Banner2_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EventShopTabBox.EventShopTabBox_C.BndEvt__Banner3_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UEventShopTabBox_C::BndEvt__Banner3_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EventShopTabBox.EventShopTabBox_C.BndEvt__Banner3_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature");
		
		UEventShopTabBox_C_BndEvt__Banner3_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EventShopTabBox.EventShopTabBox_C.BndEvt__Banner1_K2Node_ComponentBoundEvent_5_OnHovered__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UEventShopTabBox_C::BndEvt__Banner1_K2Node_ComponentBoundEvent_5_OnHovered__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EventShopTabBox.EventShopTabBox_C.BndEvt__Banner1_K2Node_ComponentBoundEvent_5_OnHovered__DelegateSignature");
		
		UEventShopTabBox_C_BndEvt__Banner1_K2Node_ComponentBoundEvent_5_OnHovered__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EventShopTabBox.EventShopTabBox_C.BndEvt__Banner2_K2Node_ComponentBoundEvent_6_OnHovered__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UEventShopTabBox_C::BndEvt__Banner2_K2Node_ComponentBoundEvent_6_OnHovered__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EventShopTabBox.EventShopTabBox_C.BndEvt__Banner2_K2Node_ComponentBoundEvent_6_OnHovered__DelegateSignature");
		
		UEventShopTabBox_C_BndEvt__Banner2_K2Node_ComponentBoundEvent_6_OnHovered__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EventShopTabBox.EventShopTabBox_C.BndEvt__Banner3_K2Node_ComponentBoundEvent_7_OnHovered__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UEventShopTabBox_C::BndEvt__Banner3_K2Node_ComponentBoundEvent_7_OnHovered__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EventShopTabBox.EventShopTabBox_C.BndEvt__Banner3_K2Node_ComponentBoundEvent_7_OnHovered__DelegateSignature");
		
		UEventShopTabBox_C_BndEvt__Banner3_K2Node_ComponentBoundEvent_7_OnHovered__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EventShopTabBox.EventShopTabBox_C.BndEvt__Banner1_K2Node_ComponentBoundEvent_8_OnUnHovered__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UEventShopTabBox_C::BndEvt__Banner1_K2Node_ComponentBoundEvent_8_OnUnHovered__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EventShopTabBox.EventShopTabBox_C.BndEvt__Banner1_K2Node_ComponentBoundEvent_8_OnUnHovered__DelegateSignature");
		
		UEventShopTabBox_C_BndEvt__Banner1_K2Node_ComponentBoundEvent_8_OnUnHovered__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EventShopTabBox.EventShopTabBox_C.BndEvt__Banner2_K2Node_ComponentBoundEvent_9_OnUnHovered__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UEventShopTabBox_C::BndEvt__Banner2_K2Node_ComponentBoundEvent_9_OnUnHovered__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EventShopTabBox.EventShopTabBox_C.BndEvt__Banner2_K2Node_ComponentBoundEvent_9_OnUnHovered__DelegateSignature");
		
		UEventShopTabBox_C_BndEvt__Banner2_K2Node_ComponentBoundEvent_9_OnUnHovered__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EventShopTabBox.EventShopTabBox_C.BndEvt__Banner3_K2Node_ComponentBoundEvent_10_OnUnHovered__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UEventShopTabBox_C::BndEvt__Banner3_K2Node_ComponentBoundEvent_10_OnUnHovered__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EventShopTabBox.EventShopTabBox_C.BndEvt__Banner3_K2Node_ComponentBoundEvent_10_OnUnHovered__DelegateSignature");
		
		UEventShopTabBox_C_BndEvt__Banner3_K2Node_ComponentBoundEvent_10_OnUnHovered__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EventShopTabBox.EventShopTabBox_C.Construct
	 * 		Flags  -> ()
	 */
	void UEventShopTabBox_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EventShopTabBox.EventShopTabBox_C.Construct");
		
		UEventShopTabBox_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EventShopTabBox.EventShopTabBox_C.ExecuteUbergraph_EventShopTabBox
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UEventShopTabBox_C::ExecuteUbergraph_EventShopTabBox(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EventShopTabBox.EventShopTabBox_C.ExecuteUbergraph_EventShopTabBox");
		
		UEventShopTabBox_C_ExecuteUbergraph_EventShopTabBox_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EventShopTabBox.EventShopTabBox_C.OnClickBanner__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UEventShopTabBox_C::OnClickBanner__DelegateSignature(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EventShopTabBox.EventShopTabBox_C.OnClickBanner__DelegateSignature");
		
		UEventShopTabBox_C_OnClickBanner__DelegateSignature_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEventShopTabBox_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEventShopTabBox_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass EventShopTabBox.EventShopTabBox_C");
		return ptr;
	}

}


