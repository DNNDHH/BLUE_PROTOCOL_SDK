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
	 * WidgetBlueprintGeneratedClass Sound_CtrlVList.Sound_CtrlVList_C
	 * Size -> 0x0050 (FullSize[0x02C8] - InheritedSize[0x0278])
	 */
	class USound_CtrlVList_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UVerticalBox*                                        VBox;                                                    // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		TArray<int32_t>                                            TextIds;                                                 // 0x0288(0x0010) Edit, BlueprintVisible, ExposeOnSpawn
		TArray<class USound_ControlItem_C*>                        SoundCtrl;                                               // 0x0298(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		class FScriptMulticastDelegate                             SoundChanged;                                            // 0x02A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             RequestPlaySound;                                        // 0x02B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void GetChildrenNum(int32_t* ChildNum);
		void GetChildValue(int32_t Index, int32_t* SoundVolume);
		void PreConstruct(bool IsDesignTime);
		void OnValueChanges(int32_t Index, int32_t Volume, bool bMute);
		void SetVolume(int32_t Index, int32_t Volume, bool bMute);
		void RequestSoundEvent(int32_t Index);
		void ExecuteUbergraph_Sound_CtrlVList(int32_t EntryPoint);
		void RequestPlaySound__DelegateSignature(int32_t Index);
		void SoundChanged__DelegateSignature(int32_t Index, int32_t Volume, bool Mute);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
