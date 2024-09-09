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
	 * 		Name   -> Function ResolutionSettingPanel.ResolutionSettingPanel_C.SetupResolutionList
	 * 		Flags  -> ()
	 */
	void UResolutionSettingPanel_C::SetupResolutionList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResolutionSettingPanel.ResolutionSettingPanel_C.SetupResolutionList");
		
		UResolutionSettingPanel_C_SetupResolutionList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ResolutionSettingPanel.ResolutionSettingPanel_C.AddOptionByCustomSize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FIntPoint                                   Size                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UResolutionSettingPanel_C::AddOptionByCustomSize(const struct FIntPoint& Size)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResolutionSettingPanel.ResolutionSettingPanel_C.AddOptionByCustomSize");
		
		UResolutionSettingPanel_C_AddOptionByCustomSize_Params params {};
		params.Size = Size;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ResolutionSettingPanel.ResolutionSettingPanel_C.AddOptionBySize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FIntPoint                                   Size                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UResolutionSettingPanel_C::AddOptionBySize(const struct FIntPoint& Size)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResolutionSettingPanel.ResolutionSettingPanel_C.AddOptionBySize");
		
		UResolutionSettingPanel_C_AddOptionBySize_Params params {};
		params.Size = Size;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ResolutionSettingPanel.ResolutionSettingPanel_C.FindNearySupportedPoint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FIntPoint                                   Resolutions                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FIntPoint                                   Finded                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UResolutionSettingPanel_C::FindNearySupportedPoint(const struct FIntPoint& Resolutions, struct FIntPoint* Finded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResolutionSettingPanel.ResolutionSettingPanel_C.FindNearySupportedPoint");
		
		UResolutionSettingPanel_C_FindNearySupportedPoint_Params params {};
		params.Resolutions = Resolutions;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Finded != nullptr)
			*Finded = params.Finded;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ResolutionSettingPanel.ResolutionSettingPanel_C.GetFilteredResolutions
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FIntPoint>                           FilterdResolutions                                         (Parm, OutParm)
	 */
	void UResolutionSettingPanel_C::GetFilteredResolutions(TArray<struct FIntPoint>* FilterdResolutions)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResolutionSettingPanel.ResolutionSettingPanel_C.GetFilteredResolutions");
		
		UResolutionSettingPanel_C_GetFilteredResolutions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FilterdResolutions != nullptr)
			*FilterdResolutions = params.FilterdResolutions;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ResolutionSettingPanel.ResolutionSettingPanel_C.On_Cmb_Resolution_GenerateWidget_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	class UWidget* UResolutionSettingPanel_C::On_Cmb_Resolution_GenerateWidget_1(const class FString& item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResolutionSettingPanel.ResolutionSettingPanel_C.On_Cmb_Resolution_GenerateWidget_1");
		
		UResolutionSettingPanel_C_On_Cmb_Resolution_GenerateWidget_1_Params params {};
		params.item = item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ResolutionSettingPanel.ResolutionSettingPanel_C.ExecuteResolution Point
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FIntPoint                                   Size                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UResolutionSettingPanel_C::ExecuteResolutionPoint(const struct FIntPoint& Size)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResolutionSettingPanel.ResolutionSettingPanel_C.ExecuteResolution Point");
		
		UResolutionSettingPanel_C_ExecuteResolutionPoint_Params params {};
		params.Size = Size;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ResolutionSettingPanel.ResolutionSettingPanel_C.Execure Resolution Str
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      resStr                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UResolutionSettingPanel_C::ExecureResolutionStr(const class FString& resStr)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResolutionSettingPanel.ResolutionSettingPanel_C.Execure Resolution Str");
		
		UResolutionSettingPanel_C_ExecureResolutionStr_Params params {};
		params.resStr = resStr;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ResolutionSettingPanel.ResolutionSettingPanel_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UResolutionSettingPanel_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResolutionSettingPanel.ResolutionSettingPanel_C.PreConstruct");
		
		UResolutionSettingPanel_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ResolutionSettingPanel.ResolutionSettingPanel_C.Construct
	 * 		Flags  -> ()
	 */
	void UResolutionSettingPanel_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResolutionSettingPanel.ResolutionSettingPanel_C.Construct");
		
		UResolutionSettingPanel_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ResolutionSettingPanel.ResolutionSettingPanel_C.OnSelectionChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      SelectedItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		ESelectInfo                                        SelectionType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UResolutionSettingPanel_C::OnSelectionChanged(const class FString& SelectedItem, ESelectInfo SelectionType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResolutionSettingPanel.ResolutionSettingPanel_C.OnSelectionChanged");
		
		UResolutionSettingPanel_C_OnSelectionChanged_Params params {};
		params.SelectedItem = SelectedItem;
		params.SelectionType = SelectionType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ResolutionSettingPanel.ResolutionSettingPanel_C.TimerEvt
	 * 		Flags  -> ()
	 */
	void UResolutionSettingPanel_C::TimerEvt()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResolutionSettingPanel.ResolutionSettingPanel_C.TimerEvt");
		
		UResolutionSettingPanel_C_TimerEvt_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ResolutionSettingPanel.ResolutionSettingPanel_C.WindowMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsChecked                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class URadioButton_C*                              RadioButton                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UResolutionSettingPanel_C::WindowMode(bool IsChecked, class URadioButton_C* RadioButton, int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResolutionSettingPanel.ResolutionSettingPanel_C.WindowMode");
		
		UResolutionSettingPanel_C_WindowMode_Params params {};
		params.IsChecked = IsChecked;
		params.RadioButton = RadioButton;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ResolutionSettingPanel.ResolutionSettingPanel_C.ShowConfirmDialog
	 * 		Flags  -> ()
	 */
	void UResolutionSettingPanel_C::ShowConfirmDialog()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResolutionSettingPanel.ResolutionSettingPanel_C.ShowConfirmDialog");
		
		UResolutionSettingPanel_C_ShowConfirmDialog_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ResolutionSettingPanel.ResolutionSettingPanel_C.ExecuteUbergraph_ResolutionSettingPanel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UResolutionSettingPanel_C::ExecuteUbergraph_ResolutionSettingPanel(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResolutionSettingPanel.ResolutionSettingPanel_C.ExecuteUbergraph_ResolutionSettingPanel");
		
		UResolutionSettingPanel_C_ExecuteUbergraph_ResolutionSettingPanel_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UResolutionSettingPanel_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UResolutionSettingPanel_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ResolutionSettingPanel.ResolutionSettingPanel_C");
		return ptr;
	}

}


