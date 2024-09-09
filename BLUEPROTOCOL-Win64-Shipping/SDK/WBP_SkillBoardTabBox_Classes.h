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
	 * WidgetBlueprintGeneratedClass WBP_SkillBoardTabBox.WBP_SkillBoardTabBox_C
	 * Size -> 0x00C9 (FullSize[0x0341] - InheritedSize[0x0278])
	 */
	class UWBP_SkillBoardTabBox_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWBP_SkillBoardTabBox_Banner_C*                      Banner_2;                                                // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_SkillBoardTabBox_Banner_C*                      Banner_3;                                                // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_SkillBoardTabBox_Banner_C*                      Banner_4;                                                // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        EffectGrp;                                               // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBButton_C*                                         SBButton_Next;                                           // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBButton_C*                                         SBButton_Prev;                                           // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBRuntimeTextBlock*                                 SBRuntimeTextBlock_132;                                  // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBRuntimeTextBlock*                                 SBRuntimeTextBlock_310;                                  // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnClickBanner;                                           // 0x02C0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		int32_t                                                    PageMax;                                                 // 0x02D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    HeaderPageIndex;                                         // 0x02D4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    BannerMax;                                               // 0x02D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    SelectIndex;                                             // 0x02DC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    SelectBannerId;                                          // 0x02E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_6OHC[0x4];                                   // 0x02E4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UWBP_SkillBoardTabBox_Banner_C*                      SelectBanner;                                            // 0x02E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<ESBClassType>                                       ClassList;                                               // 0x02F0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class UWBP_SkillBoardTabBox_Banner_C*>              TagList;                                                 // 0x0300(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		struct FKey                                                L2Key;                                                   // 0x0310(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		struct FKey                                                R2Key;                                                   // 0x0328(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		bool                                                       KeyCheck;                                                // 0x0340(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void SetKeyCheck(bool KeyCheck);
		void Select(ESBClassType* Type);
		void CheckPagerBtn();
		void SetBannerSelect(class UWBP_SkillBoardTabBox_Banner_C* Banner, bool Force);
		void SetBannerEnable();
		void UpdateBannerInfo();
		void UpdateTabInfo(bool Prev, bool Next, int32_t Click);
		void CreateList(TArray<ESBClassType>* EventList);
		void Initialize();
		void PreConstruct(bool IsDesignTime);
		void Construct();
		void BndEvt__SBButton_Prev_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__SBButton_Next_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__WBP_SkillBoardTabBox_Banner_1_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature();
		void BndEvt__WBP_SkillBoardTabBox_Banner_1_K2Node_ComponentBoundEvent_12_OnHovered__DelegateSignature();
		void BndEvt__WBP_SkillBoardTabBox_Banner_1_K2Node_ComponentBoundEvent_14_OnUnHovered__DelegateSignature();
		void BndEvt__WBP_SkillBoardTabBox_Banner_2_K2Node_ComponentBoundEvent_15_OnClicked__DelegateSignature();
		void BndEvt__WBP_SkillBoardTabBox_Banner_2_K2Node_ComponentBoundEvent_16_OnHovered__DelegateSignature();
		void BndEvt__WBP_SkillBoardTabBox_Banner_2_K2Node_ComponentBoundEvent_17_OnUnHovered__DelegateSignature();
		void BndEvt__WBP_SkillBoardTabBox_Banner_3_K2Node_ComponentBoundEvent_18_OnClicked__DelegateSignature();
		void BndEvt__WBP_SkillBoardTabBox_Banner_3_K2Node_ComponentBoundEvent_19_OnHovered__DelegateSignature();
		void BndEvt__WBP_SkillBoardTabBox_Banner_3_K2Node_ComponentBoundEvent_20_OnUnHovered__DelegateSignature();
		void LRVisibleUpdeta();
		void Bind();
		void CustomEvent_1(ESBPadKeySkinType SkinType);
		void CustomEvent_2();
		void Unbind();
		void Destruct();
		void CustomEvent_3();
		void CustomEvent_4();
		void ExecuteUbergraph_WBP_SkillBoardTabBox(int32_t EntryPoint);
		void OnClickBanner__DelegateSignature(ESBClassType Typr);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
