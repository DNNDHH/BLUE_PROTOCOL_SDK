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
	 * 		Name   -> Function MapWidget_TimeSymbolIcon.MapWidget_TimeSymbolIcon_C.IconStateCheck
	 * 		Flags  -> ()
	 */
	void UMapWidget_TimeSymbolIcon_C::IconStateCheck()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_TimeSymbolIcon.MapWidget_TimeSymbolIcon_C.IconStateCheck");
		
		UMapWidget_TimeSymbolIcon_C_IconStateCheck_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_TimeSymbolIcon.MapWidget_TimeSymbolIcon_C.SetTimeData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      TermId                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UMapWidget_TimeSymbolIcon_C::SetTimeData(const class FString& TermId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_TimeSymbolIcon.MapWidget_TimeSymbolIcon_C.SetTimeData");
		
		UMapWidget_TimeSymbolIcon_C_SetTimeData_Params params {};
		params.TermId = TermId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_TimeSymbolIcon.MapWidget_TimeSymbolIcon_C.GetTooltipText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      OutTooltipText                                             (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UMapWidget_TimeSymbolIcon_C::GetTooltipText(class FString* OutTooltipText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_TimeSymbolIcon.MapWidget_TimeSymbolIcon_C.GetTooltipText");
		
		UMapWidget_TimeSymbolIcon_C_GetTooltipText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutTooltipText != nullptr)
			*OutTooltipText = params.OutTooltipText;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_TimeSymbolIcon.MapWidget_TimeSymbolIcon_C.SetIconTextureBySymbolIconType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EMapSymbolIconType                                 InSymbolIconType                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMapWidget_TimeSymbolIcon_C::SetIconTextureBySymbolIconType(EMapSymbolIconType InSymbolIconType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_TimeSymbolIcon.MapWidget_TimeSymbolIcon_C.SetIconTextureBySymbolIconType");
		
		UMapWidget_TimeSymbolIcon_C_SetIconTextureBySymbolIconType_Params params {};
		params.InSymbolIconType = InSymbolIconType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_TimeSymbolIcon.MapWidget_TimeSymbolIcon_C.SetIconTexture
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTexture2D*                                  InTexture                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMapWidget_TimeSymbolIcon_C::SetIconTexture(class UTexture2D* InTexture)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_TimeSymbolIcon.MapWidget_TimeSymbolIcon_C.SetIconTexture");
		
		UMapWidget_TimeSymbolIcon_C_SetIconTexture_Params params {};
		params.InTexture = InTexture;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_TimeSymbolIcon.MapWidget_TimeSymbolIcon_C.SetTextToTooltip
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InText                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UMapWidget_TimeSymbolIcon_C::SetTextToTooltip(const class FText& InText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_TimeSymbolIcon.MapWidget_TimeSymbolIcon_C.SetTextToTooltip");
		
		UMapWidget_TimeSymbolIcon_C_SetTextToTooltip_Params params {};
		params.InText = InText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_TimeSymbolIcon.MapWidget_TimeSymbolIcon_C.SetTooltipEnable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsEnable                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMapWidget_TimeSymbolIcon_C::SetTooltipEnable(bool IsEnable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_TimeSymbolIcon.MapWidget_TimeSymbolIcon_C.SetTooltipEnable");
		
		UMapWidget_TimeSymbolIcon_C_SetTooltipEnable_Params params {};
		params.IsEnable = IsEnable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_TimeSymbolIcon.MapWidget_TimeSymbolIcon_C.GetToolTipWidget_1
	 * 		Flags  -> ()
	 */
	class UWidget* UMapWidget_TimeSymbolIcon_C::GetToolTipWidget_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_TimeSymbolIcon.MapWidget_TimeSymbolIcon_C.GetToolTipWidget_1");
		
		UMapWidget_TimeSymbolIcon_C_GetToolTipWidget_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_TimeSymbolIcon.MapWidget_TimeSymbolIcon_C.Construct
	 * 		Flags  -> ()
	 */
	void UMapWidget_TimeSymbolIcon_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_TimeSymbolIcon.MapWidget_TimeSymbolIcon_C.Construct");
		
		UMapWidget_TimeSymbolIcon_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_TimeSymbolIcon.MapWidget_TimeSymbolIcon_C.Destruct
	 * 		Flags  -> ()
	 */
	void UMapWidget_TimeSymbolIcon_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_TimeSymbolIcon.MapWidget_TimeSymbolIcon_C.Destruct");
		
		UMapWidget_TimeSymbolIcon_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_TimeSymbolIcon.MapWidget_TimeSymbolIcon_C.TimerEvent_IconCheck
	 * 		Flags  -> ()
	 */
	void UMapWidget_TimeSymbolIcon_C::TimerEvent_IconCheck()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_TimeSymbolIcon.MapWidget_TimeSymbolIcon_C.TimerEvent_IconCheck");
		
		UMapWidget_TimeSymbolIcon_C_TimerEvent_IconCheck_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_TimeSymbolIcon.MapWidget_TimeSymbolIcon_C.ExecuteUbergraph_MapWidget_TimeSymbolIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMapWidget_TimeSymbolIcon_C::ExecuteUbergraph_MapWidget_TimeSymbolIcon(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_TimeSymbolIcon.MapWidget_TimeSymbolIcon_C.ExecuteUbergraph_MapWidget_TimeSymbolIcon");
		
		UMapWidget_TimeSymbolIcon_C_ExecuteUbergraph_MapWidget_TimeSymbolIcon_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_TimeSymbolIcon.MapWidget_TimeSymbolIcon_C.OnOpenTimeEnd__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UMapWidget_TimeSymbolIcon_C*                 Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMapWidget_TimeSymbolIcon_C::OnOpenTimeEnd__DelegateSignature(int32_t Index, class UMapWidget_TimeSymbolIcon_C* Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_TimeSymbolIcon.MapWidget_TimeSymbolIcon_C.OnOpenTimeEnd__DelegateSignature");
		
		UMapWidget_TimeSymbolIcon_C_OnOpenTimeEnd__DelegateSignature_Params params {};
		params.Index = Index;
		params.Widget = Widget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMapWidget_TimeSymbolIcon_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMapWidget_TimeSymbolIcon_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MapWidget_TimeSymbolIcon.MapWidget_TimeSymbolIcon_C");
		return ptr;
	}

}


