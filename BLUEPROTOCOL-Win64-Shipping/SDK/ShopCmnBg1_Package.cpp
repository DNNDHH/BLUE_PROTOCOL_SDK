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
	 * 		Name   -> Function ShopCmnBg1.ShopCmnBg1_C.Set Shop Type
	 * 		Flags  -> ()
	 * Parameters:
	 * 		E_ShopCmnBg                                        ShopBgType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UShopCmnBg1_C::SetShopType(E_ShopCmnBg ShopBgType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShopCmnBg1.ShopCmnBg1_C.Set Shop Type");
		
		UShopCmnBg1_C_SetShopType_Params params {};
		params.ShopBgType = ShopBgType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShopCmnBg1.ShopCmnBg1_C.RandomPlayAnimation2
	 * 		Flags  -> ()
	 */
	void UShopCmnBg1_C::RandomPlayAnimation2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShopCmnBg1.ShopCmnBg1_C.RandomPlayAnimation2");
		
		UShopCmnBg1_C_RandomPlayAnimation2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShopCmnBg1.ShopCmnBg1_C.RandomPlayAnimation
	 * 		Flags  -> ()
	 */
	void UShopCmnBg1_C::RandomPlayAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShopCmnBg1.ShopCmnBg1_C.RandomPlayAnimation");
		
		UShopCmnBg1_C_RandomPlayAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShopCmnBg1.ShopCmnBg1_C.PlayAnimOut
	 * 		Flags  -> ()
	 */
	void UShopCmnBg1_C::PlayAnimOut()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShopCmnBg1.ShopCmnBg1_C.PlayAnimOut");
		
		UShopCmnBg1_C_PlayAnimOut_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShopCmnBg1.ShopCmnBg1_C.PlayAnimIn
	 * 		Flags  -> ()
	 */
	void UShopCmnBg1_C::PlayAnimIn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShopCmnBg1.ShopCmnBg1_C.PlayAnimIn");
		
		UShopCmnBg1_C_PlayAnimIn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShopCmnBg1.ShopCmnBg1_C.WidgetAnimationEvt_AnimIn_K2Node_WidgetAnimationEvent_1
	 * 		Flags  -> ()
	 */
	void UShopCmnBg1_C::WidgetAnimationEvt_AnimIn_K2Node_WidgetAnimationEvent_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShopCmnBg1.ShopCmnBg1_C.WidgetAnimationEvt_AnimIn_K2Node_WidgetAnimationEvent_1");
		
		UShopCmnBg1_C_WidgetAnimationEvt_AnimIn_K2Node_WidgetAnimationEvent_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShopCmnBg1.ShopCmnBg1_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UShopCmnBg1_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShopCmnBg1.ShopCmnBg1_C.PreConstruct");
		
		UShopCmnBg1_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShopCmnBg1.ShopCmnBg1_C.onAnimTimer
	 * 		Flags  -> ()
	 */
	void UShopCmnBg1_C::onAnimTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShopCmnBg1.ShopCmnBg1_C.onAnimTimer");
		
		UShopCmnBg1_C_onAnimTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShopCmnBg1.ShopCmnBg1_C.Construct
	 * 		Flags  -> ()
	 */
	void UShopCmnBg1_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShopCmnBg1.ShopCmnBg1_C.Construct");
		
		UShopCmnBg1_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShopCmnBg1.ShopCmnBg1_C.WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_2
	 * 		Flags  -> ()
	 */
	void UShopCmnBg1_C::WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShopCmnBg1.ShopCmnBg1_C.WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_2");
		
		UShopCmnBg1_C_WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShopCmnBg1.ShopCmnBg1_C.ExecuteUbergraph_ShopCmnBg1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UShopCmnBg1_C::ExecuteUbergraph_ShopCmnBg1(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShopCmnBg1.ShopCmnBg1_C.ExecuteUbergraph_ShopCmnBg1");
		
		UShopCmnBg1_C_ExecuteUbergraph_ShopCmnBg1_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShopCmnBg1.ShopCmnBg1_C.OnAnimOutFinished__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UShopCmnBg1_C::OnAnimOutFinished__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShopCmnBg1.ShopCmnBg1_C.OnAnimOutFinished__DelegateSignature");
		
		UShopCmnBg1_C_OnAnimOutFinished__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShopCmnBg1.ShopCmnBg1_C.OnAnimInFinished__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UShopCmnBg1_C::OnAnimInFinished__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShopCmnBg1.ShopCmnBg1_C.OnAnimInFinished__DelegateSignature");
		
		UShopCmnBg1_C_OnAnimInFinished__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UShopCmnBg1_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UShopCmnBg1_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ShopCmnBg1.ShopCmnBg1_C");
		return ptr;
	}

}


