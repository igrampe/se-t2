platform :ios, '9.0'

inhibit_all_warnings!

def di
  pod 'Typhoon', '~> 4.0.0'
end

def data
    pod 'UICKeyChainStore', '~> 2.1'
end

def network
    pod 'AFNetworking', '~> 3.1'
end

def other
	pod 'APLViperStack', :path => 'APLViperStack'
end

def ui
  pod 'PureLayout', '~> 3.0'
  pod 'SVProgressHUD', '~> 2.1.2'
end

target 'skyeng-test-2' do
  di
  ui
  data
  network
  other
end
