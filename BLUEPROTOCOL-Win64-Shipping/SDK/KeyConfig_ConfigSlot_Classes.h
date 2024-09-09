#pragma once

/**
 * Name: BLUEPROTOCOL-Win64-Shipping
 * Version: 1.6.0
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * WidgetBlueprintGeneratedClass KeyConfig_ConfigSlot.KeyConfig_ConfigSlot_C
	 * Size -> 0x00CF (FullSize[0x0347] - InheritedSize[0x0278])
	 */
	class UKeyConfig_ConfigSlot_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    AnmBtn2In;                                               // 0x0280(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    AnmBtn1In;                                               // 0x0288(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class USBRuntimeTextBlock*                                 ActionName;                                              // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBorder*                                             ChangedBoader;                                           // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBButton_C*                                         GamePadInput_Btn;                                        // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBRuntimeTextBlock*                                 GamePadInput_Lbl;                                        // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Img_NewMark;                                             // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBButton_C*                                         KeyMouseInput_Btn;                                       // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBRuntimeTextBlock*                                 KeyMouseInput_Lbl;                                       // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		EKeyInputMode                                              InputMode;                                               // 0x02C8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_5MEI[0x7];                                   // 0x02C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             StartWaitInput;                                          // 0x02D0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             ButtonClicked_Key;                                       // 0x02E0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             ButtonClicked_Pad;                                       // 0x02F0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		EConfig_KeyconfigItems                                     KeyType;                                                 // 0x0300(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bChanged;                                                // 0x0301(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bNone;                                                   // 0x0302(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_6MMU[0x5];                                   // 0x0303(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UObject*                                             NormalImage;                                             // 0x0308(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UObject*                                             ChangedImage;                                            // 0x0310(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UObject*                                             SelectImage;                                             // 0x0318(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UObject*                                             DisableImage;                                            // 0x0320(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UObject*                                             HoverdImage;                                             // 0x0328(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FString                                              TempBookmark;                                            // 0x0330(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		bool                                                       bBookmark;                                               // 0x0340(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		ESBKeyConfigGamepadKey                                     padButton;                                               // 0x0341(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ESBKeyConfigKeyboardKey                                    KeyboardKey;                                             // 0x0342(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ESBKeyConfigMouseKey                                       MouseKey;                                                // 0x0343(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ENeedInputType                                             NeedType;                                                // 0x0344(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       SwichLR;                                                 // 0x0345(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bCycleCall;                                              // 0x0346(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		struct FSlateColor GetPadAssignedColor();
		struct FSlateColor GetKBAssignedColor();
		void IsKBNeedAssigned(bool* IsNeedAssined);
		void IsPadNeedAssigned(bool* IsNeedAssined);
		void InitializeNeedType();
		void ConvertBookMark(EConfig_KeyconfigItems ConfigType, bool* bIsValid, ESBBookMarkerSlot* Slot);
		void IsBookMarks(EConfig_KeyconfigItems KeyConfigItems, bool* IsBookMark);
		void GetItemStringId(EConfig_KeyconfigItems Type, int32_t* TextId);
		void ResetInputMode();
		void BndEvt__KeyMouseInput_Btn_K2Node_ComponentBoundEvent_72_OnButtonClickedEvent__DelegateSignature();
		void SetData(const struct FKeyConfigType& ConfigData);
		void CheckChanged(bool bChanged);
		void SetKeyMouse(ESBKeyConfigKeyboardKey KeyboardKey, ESBKeyConfigMouseKey MouseKey);
		void SetGamePadButton(ESBKeyConfigGamepadKey Selection, bool bSwichLR);
		void KeyMouseChanged(bool KeyMouseChanged);
		void PadChanged(bool PadChanged);
		void ApplySlateWidget();
		void BndEvt__GamePadInput_Btn_K2Node_ComponentBoundEvent_147_OnButtonClickedEvent__DelegateSignature();
		void SetRequireSetting(bool bRequire);
		void ExecuteUbergraph_KeyConfig_ConfigSlot(int32_t EntryPoint);
		void ButtonClicked_Pad__DelegateSignature(EConfig_KeyconfigItems KeyType, class UKeyConfig_ConfigSlot_C* Caller);
		void ButtonClicked_Key__DelegateSignature(EConfig_KeyconfigItems KeyType, class UKeyConfig_ConfigSlot_C* Caller);
		void StartWaitInput__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
