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
	 * 		Name   -> Function Fang_expedition_DetailHeader.Fang_expedition_DetailHeader_C.SetCloseBtnVisible
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Visible                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFang_expedition_DetailHeader_C::SetCloseBtnVisible(bool Visible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_DetailHeader.Fang_expedition_DetailHeader_C.SetCloseBtnVisible");
		
		UFang_expedition_DetailHeader_C_SetCloseBtnVisible_Params params {};
		params.Visible = Visible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_DetailHeader.Fang_expedition_DetailHeader_C.UpdateFangData
	 * 		Flags  -> ()
	 */
	void UFang_expedition_DetailHeader_C::UpdateFangData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_DetailHeader.Fang_expedition_DetailHeader_C.UpdateFangData");
		
		UFang_expedition_DetailHeader_C_UpdateFangData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_DetailHeader.Fang_expedition_DetailHeader_C.IconAnimationStop
	 * 		Flags  -> ()
	 */
	void UFang_expedition_DetailHeader_C::IconAnimationStop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_DetailHeader.Fang_expedition_DetailHeader_C.IconAnimationStop");
		
		UFang_expedition_DetailHeader_C_IconAnimationStop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_DetailHeader.Fang_expedition_DetailHeader_C.UpdateFangTexture
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTexture2D*                                  Texture                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFang_expedition_DetailHeader_C::UpdateFangTexture(class UTexture2D* Texture, int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_DetailHeader.Fang_expedition_DetailHeader_C.UpdateFangTexture");
		
		UFang_expedition_DetailHeader_C_UpdateFangTexture_Params params {};
		params.Texture = Texture;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_DetailHeader.Fang_expedition_DetailHeader_C.SetFangData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FString>                              UniqueIds                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               UseAnimation                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFang_expedition_DetailHeader_C::SetFangData(TArray<class FString>* UniqueIds, bool UseAnimation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_DetailHeader.Fang_expedition_DetailHeader_C.SetFangData");
		
		UFang_expedition_DetailHeader_C_SetFangData_Params params {};
		params.UseAnimation = UseAnimation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (UniqueIds != nullptr)
			*UniqueIds = params.UniqueIds;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_DetailHeader.Fang_expedition_DetailHeader_C.SetPlayData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBFang_expeditionPlayData                  PlayData                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UFang_expedition_DetailHeader_C::SetPlayData(struct FSBFang_expeditionPlayData* PlayData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_DetailHeader.Fang_expedition_DetailHeader_C.SetPlayData");
		
		UFang_expedition_DetailHeader_C_SetPlayData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PlayData != nullptr)
			*PlayData = params.PlayData;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_DetailHeader.Fang_expedition_DetailHeader_C.SetStay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Category                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFang_expedition_DetailHeader_C::SetStay(int32_t Category)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_DetailHeader.Fang_expedition_DetailHeader_C.SetStay");
		
		UFang_expedition_DetailHeader_C_SetStay_Params params {};
		params.Category = Category;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_DetailHeader.Fang_expedition_DetailHeader_C.OnLoaded_9F74DC0840402151039A7F9243B7E826
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFang_expedition_DetailHeader_C::OnLoaded_9F74DC0840402151039A7F9243B7E826(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_DetailHeader.Fang_expedition_DetailHeader_C.OnLoaded_9F74DC0840402151039A7F9243B7E826");
		
		UFang_expedition_DetailHeader_C_OnLoaded_9F74DC0840402151039A7F9243B7E826_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_DetailHeader.Fang_expedition_DetailHeader_C.BndEvt__Fang_expedition_DetailHeader_CmnClose01_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UFang_expedition_DetailHeader_C::BndEvt__Fang_expedition_DetailHeader_CmnClose01_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_DetailHeader.Fang_expedition_DetailHeader_C.BndEvt__Fang_expedition_DetailHeader_CmnClose01_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature");
		
		UFang_expedition_DetailHeader_C_BndEvt__Fang_expedition_DetailHeader_CmnClose01_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_DetailHeader.Fang_expedition_DetailHeader_C.FangImageLoad
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFang_expedition_DetailHeader_C::FangImageLoad(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_DetailHeader.Fang_expedition_DetailHeader_C.FangImageLoad");
		
		UFang_expedition_DetailHeader_C_FangImageLoad_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_DetailHeader.Fang_expedition_DetailHeader_C.ImageAnimationFinish
	 * 		Flags  -> ()
	 */
	void UFang_expedition_DetailHeader_C::ImageAnimationFinish()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_DetailHeader.Fang_expedition_DetailHeader_C.ImageAnimationFinish");
		
		UFang_expedition_DetailHeader_C_ImageAnimationFinish_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_DetailHeader.Fang_expedition_DetailHeader_C.ExecuteUbergraph_Fang_expedition_DetailHeader
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFang_expedition_DetailHeader_C::ExecuteUbergraph_Fang_expedition_DetailHeader(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_DetailHeader.Fang_expedition_DetailHeader_C.ExecuteUbergraph_Fang_expedition_DetailHeader");
		
		UFang_expedition_DetailHeader_C_ExecuteUbergraph_Fang_expedition_DetailHeader_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_DetailHeader.Fang_expedition_DetailHeader_C.OnPressCloseButton__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UFang_expedition_DetailHeader_C::OnPressCloseButton__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_DetailHeader.Fang_expedition_DetailHeader_C.OnPressCloseButton__DelegateSignature");
		
		UFang_expedition_DetailHeader_C_OnPressCloseButton__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFang_expedition_DetailHeader_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFang_expedition_DetailHeader_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Fang_expedition_DetailHeader.Fang_expedition_DetailHeader_C");
		return ptr;
	}

}


