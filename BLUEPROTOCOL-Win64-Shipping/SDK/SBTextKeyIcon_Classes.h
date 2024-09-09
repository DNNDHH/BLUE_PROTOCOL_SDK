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
	 * WidgetBlueprintGeneratedClass SBTextKeyIcon.SBTextKeyIcon_C
	 * Size -> 0x00C8 (FullSize[0x0340] - InheritedSize[0x0278])
	 */
	class USBTextKeyIcon_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UTextBlock*                                          TextAction;                                              // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		struct FSlateFontInfo                                      InFontInfo;                                              // 0x0288(0x0088) Edit, BlueprintVisible, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnUpdateOperationMode;                                   // 0x0310(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnChangePadSkinType;                                     // 0x0320(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnUpdateKeyConfig;                                       // 0x0330(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		class FText GetText();
		void SetText(const class FText& InText);
		class FText GetActionKeyTextGamePad(const struct FSBPlayerClassKeyConfigData& KeyConfigData, ESBKeyConfigAction KeyConfigActionPad);
		class FText GetActionKeyTextKB(const struct FSBPlayerClassKeyConfigData& KeyConfigData, ESBKeyConfigAction KeyConfigActionKB);
		class FText GetActionKeyText(const struct FSBPlayerClassKeyConfigData& KeyConfigData, ESBKeyConfigAction KeyConfigActionKB, ESBKeyConfigAction KeyConfigActionPad);
		class FString GetDisplayTextByKey(const struct FKey& Key, bool bReplaceFunction);
		void SetDisplayTextByKey(const struct FKey& InKey, bool bReplaceFunction);
		class FString GetDisplayTextByAction(ESBUIKeyConfigAction KeyConfigAction);
		void SetDisplayTextByAction(ESBUIKeyConfigAction KeyConfigAction);
		void SetDisplayTextByKBPad2(const struct FSBPlayerClassKeyConfigData& KeyConfigData, ESBKeyConfigAction KeyConfigActionKB, ESBKeyConfigAction KeyConfigActionPad);
		void SetDisplayTextByKBPad1(ESBKeyConfigAction KeyConfigActionKB, ESBKeyConfigAction KeyConfigActionPad, bool* Result);
		void BindUpdateOperationMode();
		void UnbindUpdateOperationMode();
		void CustomEvent_5();
		void BindChangePadSkinType();
		void UnbindChangePadSkinType();
		void CustomEvent_6(ESBPadKeySkinType SkinType);
		void BindConfigSave();
		void UnbindConfigSave();
		void CustomEvent();
		void BindUpdateKeyConfig();
		void UnbindUpdateKeyConfig();
		void PreConstruct(bool IsDesignTime);
		void Construct();
		void Destruct();
		void ExecuteUbergraph_SBTextKeyIcon(int32_t EntryPoint);
		void OnUpdateKeyConfig__DelegateSignature();
		void OnChangePadSkinType__DelegateSignature();
		void OnUpdateOperationMode__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
