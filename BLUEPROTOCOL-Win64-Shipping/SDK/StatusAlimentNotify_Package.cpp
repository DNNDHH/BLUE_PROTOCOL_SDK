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
	 * 		Name   -> Function StatusAlimentNotify.StatusAlimentNotify_C.GetTextStatus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        InTextId                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class FText UStatusAlimentNotify_C::GetTextStatus(const class FName& InTextId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StatusAlimentNotify.StatusAlimentNotify_C.GetTextStatus");
		
		UStatusAlimentNotify_C_GetTextStatus_Params params {};
		params.InTextId = InTextId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StatusAlimentNotify.StatusAlimentNotify_C.PlayAnimInOut
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsForward                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UStatusAlimentNotify_C::PlayAnimInOut(bool IsForward)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StatusAlimentNotify.StatusAlimentNotify_C.PlayAnimInOut");
		
		UStatusAlimentNotify_C_PlayAnimInOut_Params params {};
		params.IsForward = IsForward;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StatusAlimentNotify.StatusAlimentNotify_C.FindIconAssetData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBStatusAilmentIconConfig                  InStatusAliment                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 * 		class FName                                        OutTextID                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsBuff                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		ESBStatusAilmentPlateType                          OutType                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class UTexture2D* UStatusAlimentNotify_C::FindIconAssetData(const struct FSBStatusAilmentIconConfig& InStatusAliment, class FName* OutTextID, bool* IsBuff, ESBStatusAilmentPlateType* OutType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StatusAlimentNotify.StatusAlimentNotify_C.FindIconAssetData");
		
		UStatusAlimentNotify_C_FindIconAssetData_Params params {};
		params.InStatusAliment = InStatusAliment;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutTextID != nullptr)
			*OutTextID = params.OutTextID;
		if (IsBuff != nullptr)
			*IsBuff = params.IsBuff;
		if (OutType != nullptr)
			*OutType = params.OutType;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StatusAlimentNotify.StatusAlimentNotify_C.OnAnimationFinished
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidgetAnimation*                            Animation                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UStatusAlimentNotify_C::OnAnimationFinished(class UWidgetAnimation* Animation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StatusAlimentNotify.StatusAlimentNotify_C.OnAnimationFinished");
		
		UStatusAlimentNotify_C_OnAnimationFinished_Params params {};
		params.Animation = Animation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StatusAlimentNotify.StatusAlimentNotify_C.ExecuteUbergraph_StatusAlimentNotify
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UStatusAlimentNotify_C::ExecuteUbergraph_StatusAlimentNotify(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StatusAlimentNotify.StatusAlimentNotify_C.ExecuteUbergraph_StatusAlimentNotify");
		
		UStatusAlimentNotify_C_ExecuteUbergraph_StatusAlimentNotify_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UStatusAlimentNotify_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStatusAlimentNotify_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass StatusAlimentNotify.StatusAlimentNotify_C");
		return ptr;
	}

}


