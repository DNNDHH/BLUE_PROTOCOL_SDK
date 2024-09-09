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
	 * 		Name   -> Function DebugMenu.DebugMenu_C.GetItemStrageNumber
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            AllSouko                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ItemIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            StorageNumber                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDebugMenu_C::GetItemStrageNumber(int32_t AllSouko, int32_t ItemIndex, int32_t* StorageNumber)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugMenu.DebugMenu_C.GetItemStrageNumber");
		
		UDebugMenu_C_GetItemStrageNumber_Params params {};
		params.AllSouko = AllSouko;
		params.ItemIndex = ItemIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (StorageNumber != nullptr)
			*StorageNumber = params.StorageNumber;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugMenu.DebugMenu_C.Set Item Command
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ItemSetName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            AllSouko                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDebugMenu_C::SetItemCommand(const class FName& ItemSetName, int32_t AllSouko)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugMenu.DebugMenu_C.Set Item Command");
		
		UDebugMenu_C_SetItemCommand_Params params {};
		params.ItemSetName = ItemSetName;
		params.AllSouko = AllSouko;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugMenu.DebugMenu_C.GetText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USBTextTableAsset*                           InTextTableAsset                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        InTextId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        InOldTextId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        OutText                                                    (Parm, OutParm)
	 */
	void UDebugMenu_C::GetText(class USBTextTableAsset* InTextTableAsset, const class FName& InTextId, const class FName& InOldTextId, class FText* OutText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugMenu.DebugMenu_C.GetText");
		
		UDebugMenu_C_GetText_Params params {};
		params.InTextTableAsset = InTextTableAsset;
		params.InTextId = InTextId;
		params.InOldTextId = InOldTextId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutText != nullptr)
			*OutText = params.OutText;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugMenu.DebugMenu_C.CreateChildButton
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UDebugChildButton_C*                         OutDebugButton                                             (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDebugMenu_C::CreateChildButton(class UDebugChildButton_C** OutDebugButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugMenu.DebugMenu_C.CreateChildButton");
		
		UDebugMenu_C_CreateChildButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutDebugButton != nullptr)
			*OutDebugButton = params.OutDebugButton;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugMenu.DebugMenu_C.AddMenuItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USBUserWidget*                               Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDebugMenu_C::AddMenuItem(class USBUserWidget* Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugMenu.DebugMenu_C.AddMenuItem");
		
		UDebugMenu_C_AddMenuItem_Params params {};
		params.Widget = Widget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugMenu.DebugMenu_C.SetTitle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        TitleText                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UDebugMenu_C::SetTitle(const class FText& TitleText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugMenu.DebugMenu_C.SetTitle");
		
		UDebugMenu_C_SetTitle_Params params {};
		params.TitleText = TitleText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugMenu.DebugMenu_C.AddChildMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUserWidget*                                 ChildMenu                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDebugMenu_C::AddChildMenu(class UUserWidget* ChildMenu)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugMenu.DebugMenu_C.AddChildMenu");
		
		UDebugMenu_C_AddChildMenu_Params params {};
		params.ChildMenu = ChildMenu;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugMenu.DebugMenu_C.GetCurrentValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        CurrentValue                                               (Parm, OutParm)
	 * 		bool                                               ValueExists                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDebugMenu_C::GetCurrentValue(class FText* CurrentValue, bool* ValueExists)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugMenu.DebugMenu_C.GetCurrentValue");
		
		UDebugMenu_C_GetCurrentValue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CurrentValue != nullptr)
			*CurrentValue = params.CurrentValue;
		if (ValueExists != nullptr)
			*ValueExists = params.ValueExists;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugMenu.DebugMenu_C.ProcFocusCursorMoveUpDown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InMoveUp                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDebugMenu_C::ProcFocusCursorMoveUpDown(bool InMoveUp)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugMenu.DebugMenu_C.ProcFocusCursorMoveUpDown");
		
		UDebugMenu_C_ProcFocusCursorMoveUpDown_Params params {};
		params.InMoveUp = InMoveUp;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugMenu.DebugMenu_C.SetDebugMenuVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InVisible                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDebugMenu_C::SetDebugMenuVisibility(bool InVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugMenu.DebugMenu_C.SetDebugMenuVisibility");
		
		UDebugMenu_C_SetDebugMenuVisibility_Params params {};
		params.InVisible = InVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugMenu.DebugMenu_C.InputDebugMenuButton
	 * 		Flags  -> ()
	 */
	void UDebugMenu_C::InputDebugMenuButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugMenu.DebugMenu_C.InputDebugMenuButton");
		
		UDebugMenu_C_InputDebugMenuButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugMenu.DebugMenu_C.CreateButton
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UDebugButton_C*                              OutDebugButton                                             (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDebugMenu_C::CreateButton(class UDebugButton_C** OutDebugButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugMenu.DebugMenu_C.CreateButton");
		
		UDebugMenu_C_CreateButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutDebugButton != nullptr)
			*OutDebugButton = params.OutDebugButton;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugMenu.DebugMenu_C.CreateCommand
	 * 		Flags  -> ()
	 */
	void UDebugMenu_C::CreateCommand()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugMenu.DebugMenu_C.CreateCommand");
		
		UDebugMenu_C_CreateCommand_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugMenu.DebugMenu_C.CreateComboBox
	 * 		Flags  -> ()
	 */
	void UDebugMenu_C::CreateComboBox()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugMenu.DebugMenu_C.CreateComboBox");
		
		UDebugMenu_C_CreateComboBox_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugMenu.DebugMenu_C.CreateString
	 * 		Flags  -> ()
	 */
	void UDebugMenu_C::CreateString()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugMenu.DebugMenu_C.CreateString");
		
		UDebugMenu_C_CreateString_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugMenu.DebugMenu_C.CreateFloat
	 * 		Flags  -> ()
	 */
	void UDebugMenu_C::CreateFloat()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugMenu.DebugMenu_C.CreateFloat");
		
		UDebugMenu_C_CreateFloat_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugMenu.DebugMenu_C.CreateInt32
	 * 		Flags  -> ()
	 */
	void UDebugMenu_C::CreateInt32()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugMenu.DebugMenu_C.CreateInt32");
		
		UDebugMenu_C_CreateInt32_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugMenu.DebugMenu_C.CreateCheckBox
	 * 		Flags  -> ()
	 */
	void UDebugMenu_C::CreateCheckBox()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugMenu.DebugMenu_C.CreateCheckBox");
		
		UDebugMenu_C_CreateCheckBox_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugMenu.DebugMenu_C.OnLoaded_102A04CB4074E1F46BB26DB6C4891B24
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 */
	void UDebugMenu_C::OnLoaded_102A04CB4074E1F46BB26DB6C4891B24(class UClass* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugMenu.DebugMenu_C.OnLoaded_102A04CB4074E1F46BB26DB6C4891B24");
		
		UDebugMenu_C_OnLoaded_102A04CB4074E1F46BB26DB6C4891B24_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugMenu.DebugMenu_C.OnLoaded_BCFFDC8A4AF2D3E733074AB599485936
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 */
	void UDebugMenu_C::OnLoaded_BCFFDC8A4AF2D3E733074AB599485936(class UClass* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugMenu.DebugMenu_C.OnLoaded_BCFFDC8A4AF2D3E733074AB599485936");
		
		UDebugMenu_C_OnLoaded_BCFFDC8A4AF2D3E733074AB599485936_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugMenu.DebugMenu_C.OnLoaded_49823CC541B3ACCAE0FC52AA1A214F77
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 */
	void UDebugMenu_C::OnLoaded_49823CC541B3ACCAE0FC52AA1A214F77(class UClass* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugMenu.DebugMenu_C.OnLoaded_49823CC541B3ACCAE0FC52AA1A214F77");
		
		UDebugMenu_C_OnLoaded_49823CC541B3ACCAE0FC52AA1A214F77_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugMenu.DebugMenu_C.OnLoaded_4F44425143BDF3C769780FB39763FAA8
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 */
	void UDebugMenu_C::OnLoaded_4F44425143BDF3C769780FB39763FAA8(class UClass* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugMenu.DebugMenu_C.OnLoaded_4F44425143BDF3C769780FB39763FAA8");
		
		UDebugMenu_C_OnLoaded_4F44425143BDF3C769780FB39763FAA8_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugMenu.DebugMenu_C.OnLoaded_27772D90466B1887FF9CA8BA68DDE282
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 */
	void UDebugMenu_C::OnLoaded_27772D90466B1887FF9CA8BA68DDE282(class UClass* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugMenu.DebugMenu_C.OnLoaded_27772D90466B1887FF9CA8BA68DDE282");
		
		UDebugMenu_C_OnLoaded_27772D90466B1887FF9CA8BA68DDE282_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugMenu.DebugMenu_C.OnLoaded_B6543B2E423821130C7933B54E69A6C5
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 */
	void UDebugMenu_C::OnLoaded_B6543B2E423821130C7933B54E69A6C5(class UClass* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugMenu.DebugMenu_C.OnLoaded_B6543B2E423821130C7933B54E69A6C5");
		
		UDebugMenu_C_OnLoaded_B6543B2E423821130C7933B54E69A6C5_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugMenu.DebugMenu_C.OnLoaded_8950531E42034202AFA24B8A7E7E2D11
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 */
	void UDebugMenu_C::OnLoaded_8950531E42034202AFA24B8A7E7E2D11(class UClass* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugMenu.DebugMenu_C.OnLoaded_8950531E42034202AFA24B8A7E7E2D11");
		
		UDebugMenu_C_OnLoaded_8950531E42034202AFA24B8A7E7E2D11_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugMenu.DebugMenu_C.OnLoaded_FCD78A754BFACBE57BE3FB962EBE3E7E
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 */
	void UDebugMenu_C::OnLoaded_FCD78A754BFACBE57BE3FB962EBE3E7E(class UClass* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugMenu.DebugMenu_C.OnLoaded_FCD78A754BFACBE57BE3FB962EBE3E7E");
		
		UDebugMenu_C_OnLoaded_FCD78A754BFACBE57BE3FB962EBE3E7E_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugMenu.DebugMenu_C.OnGetFocus
	 * 		Flags  -> ()
	 */
	void UDebugMenu_C::OnGetFocus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugMenu.DebugMenu_C.OnGetFocus");
		
		UDebugMenu_C_OnGetFocus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugMenu.DebugMenu_C.OnLostFocus
	 * 		Flags  -> ()
	 */
	void UDebugMenu_C::OnLostFocus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugMenu.DebugMenu_C.OnLostFocus");
		
		UDebugMenu_C_OnLostFocus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugMenu.DebugMenu_C.OnPressOk
	 * 		Flags  -> ()
	 */
	void UDebugMenu_C::OnPressOk()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugMenu.DebugMenu_C.OnPressOk");
		
		UDebugMenu_C_OnPressOk_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugMenu.DebugMenu_C.ChectCommand_BulkGetItemMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     InSender                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     InParam                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDebugMenu_C::ChectCommand_BulkGetItemMenu(class UObject* InSender, class UObject* InParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugMenu.DebugMenu_C.ChectCommand_BulkGetItemMenu");
		
		UDebugMenu_C_ChectCommand_BulkGetItemMenu_Params params {};
		params.InSender = InSender;
		params.InParam = InParam;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugMenu.DebugMenu_C.CheatCommand_RecepiBroker
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     InSender                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     InParam                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDebugMenu_C::CheatCommand_RecepiBroker(class UObject* InSender, class UObject* InParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugMenu.DebugMenu_C.CheatCommand_RecepiBroker");
		
		UDebugMenu_C_CheatCommand_RecepiBroker_Params params {};
		params.InSender = InSender;
		params.InParam = InParam;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugMenu.DebugMenu_C.CheatCommand_ScriptExecutor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     InSender                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     InParam                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDebugMenu_C::CheatCommand_ScriptExecutor(class UObject* InSender, class UObject* InParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugMenu.DebugMenu_C.CheatCommand_ScriptExecutor");
		
		UDebugMenu_C_CheatCommand_ScriptExecutor_Params params {};
		params.InSender = InSender;
		params.InParam = InParam;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugMenu.DebugMenu_C.CheatCommand_LevelScriptList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     InSender                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     InParam                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDebugMenu_C::CheatCommand_LevelScriptList(class UObject* InSender, class UObject* InParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugMenu.DebugMenu_C.CheatCommand_LevelScriptList");
		
		UDebugMenu_C_CheatCommand_LevelScriptList_Params params {};
		params.InSender = InSender;
		params.InParam = InParam;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugMenu.DebugMenu_C.CheatCommand_ItemSupplyer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     InSender                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     InParam                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDebugMenu_C::CheatCommand_ItemSupplyer(class UObject* InSender, class UObject* InParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugMenu.DebugMenu_C.CheatCommand_ItemSupplyer");
		
		UDebugMenu_C_CheatCommand_ItemSupplyer_Params params {};
		params.InSender = InSender;
		params.InParam = InParam;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugMenu.DebugMenu_C.CheatCommand_Party_Create_Invite_Send
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     InSender                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     InParam                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDebugMenu_C::CheatCommand_Party_Create_Invite_Send(class UObject* InSender, class UObject* InParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugMenu.DebugMenu_C.CheatCommand_Party_Create_Invite_Send");
		
		UDebugMenu_C_CheatCommand_Party_Create_Invite_Send_Params params {};
		params.InSender = InSender;
		params.InParam = InParam;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugMenu.DebugMenu_C.CheatCommand_ResponseChecker
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     InSender                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     InParam                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDebugMenu_C::CheatCommand_ResponseChecker(class UObject* InSender, class UObject* InParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugMenu.DebugMenu_C.CheatCommand_ResponseChecker");
		
		UDebugMenu_C_CheatCommand_ResponseChecker_Params params {};
		params.InSender = InSender;
		params.InParam = InParam;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugMenu.DebugMenu_C.ChectCommand_AddMasterItemsMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     InSender                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     InParam                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDebugMenu_C::ChectCommand_AddMasterItemsMenu(class UObject* InSender, class UObject* InParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugMenu.DebugMenu_C.ChectCommand_AddMasterItemsMenu");
		
		UDebugMenu_C_ChectCommand_AddMasterItemsMenu_Params params {};
		params.InSender = InSender;
		params.InParam = InParam;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugMenu.DebugMenu_C.CheatCommand_BulkGetItemSet
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     InSender                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     InParam                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDebugMenu_C::CheatCommand_BulkGetItemSet(class UObject* InSender, class UObject* InParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugMenu.DebugMenu_C.CheatCommand_BulkGetItemSet");
		
		UDebugMenu_C_CheatCommand_BulkGetItemSet_Params params {};
		params.InSender = InSender;
		params.InParam = InParam;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugMenu.DebugMenu_C.CheatCommand_NotificationMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     InSender                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     InParam                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDebugMenu_C::CheatCommand_NotificationMenu(class UObject* InSender, class UObject* InParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugMenu.DebugMenu_C.CheatCommand_NotificationMenu");
		
		UDebugMenu_C_CheatCommand_NotificationMenu_Params params {};
		params.InSender = InSender;
		params.InParam = InParam;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugMenu.DebugMenu_C.NotificationLoaded
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Result                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDebugMenu_C::NotificationLoaded(bool Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugMenu.DebugMenu_C.NotificationLoaded");
		
		UDebugMenu_C_NotificationLoaded_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugMenu.DebugMenu_C.Construct
	 * 		Flags  -> ()
	 */
	void UDebugMenu_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugMenu.DebugMenu_C.Construct");
		
		UDebugMenu_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugMenu.DebugMenu_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_137_OnButtonReleasedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UDebugMenu_C::BndEvt__CloseButton_K2Node_ComponentBoundEvent_137_OnButtonReleasedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugMenu.DebugMenu_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_137_OnButtonReleasedEvent__DelegateSignature");
		
		UDebugMenu_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_137_OnButtonReleasedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugMenu.DebugMenu_C.EventDispatcher_OnClose_Event
	 * 		Flags  -> ()
	 */
	void UDebugMenu_C::EventDispatcher_OnClose_Event()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugMenu.DebugMenu_C.EventDispatcher_OnClose_Event");
		
		UDebugMenu_C_EventDispatcher_OnClose_Event_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugMenu.DebugMenu_C.DebugButton_OnClicked_イベント
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UDebugButton_C*                              DebugButton                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDebugMenu_C::DebugButton_OnClicked_(class UDebugButton_C* DebugButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugMenu.DebugMenu_C.DebugButton_OnClicked_イベント");
		
		UDebugMenu_C_DebugButton_OnClicked__Params params {};
		params.DebugButton = DebugButton;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugMenu.DebugMenu_C.OnPress_Cancel
	 * 		Flags  -> ()
	 */
	void UDebugMenu_C::OnPress_Cancel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugMenu.DebugMenu_C.OnPress_Cancel");
		
		UDebugMenu_C_OnPress_Cancel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugMenu.DebugMenu_C.OnSetFocusItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InFocusId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDebugMenu_C::OnSetFocusItem(int32_t InFocusId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugMenu.DebugMenu_C.OnSetFocusItem");
		
		UDebugMenu_C_OnSetFocusItem_Params params {};
		params.InFocusId = InFocusId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugMenu.DebugMenu_C.OnRepeat_Up
	 * 		Flags  -> ()
	 */
	void UDebugMenu_C::OnRepeat_Up()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugMenu.DebugMenu_C.OnRepeat_Up");
		
		UDebugMenu_C_OnRepeat_Up_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugMenu.DebugMenu_C.OnRepeat_Down
	 * 		Flags  -> ()
	 */
	void UDebugMenu_C::OnRepeat_Down()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugMenu.DebugMenu_C.OnRepeat_Down");
		
		UDebugMenu_C_OnRepeat_Down_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugMenu.DebugMenu_C.ProcVisibleSettingChange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBUIType                                          InUIType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bInVisibility                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bInInstantly                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDebugMenu_C::ProcVisibleSettingChange(ESBUIType InUIType, bool bInVisibility, bool bInInstantly)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugMenu.DebugMenu_C.ProcVisibleSettingChange");
		
		UDebugMenu_C_ProcVisibleSettingChange_Params params {};
		params.InUIType = InUIType;
		params.bInVisibility = bInVisibility;
		params.bInInstantly = bInInstantly;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugMenu.DebugMenu_C.Destruct
	 * 		Flags  -> ()
	 */
	void UDebugMenu_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugMenu.DebugMenu_C.Destruct");
		
		UDebugMenu_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugMenu.DebugMenu_C.ExecuteUbergraph_DebugMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDebugMenu_C::ExecuteUbergraph_DebugMenu(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugMenu.DebugMenu_C.ExecuteUbergraph_DebugMenu");
		
		UDebugMenu_C_ExecuteUbergraph_DebugMenu_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugMenu.DebugMenu_C.EventDispatcher_OnClose__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UDebugMenu_C::EventDispatcher_OnClose__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugMenu.DebugMenu_C.EventDispatcher_OnClose__DelegateSignature");
		
		UDebugMenu_C_EventDispatcher_OnClose__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDebugMenu_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDebugMenu_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass DebugMenu.DebugMenu_C");
		return ptr;
	}

}


