import React from 'react';
import { X, AlertCircle } from 'lucide-react';

const EmergencyAlert = () => {
  return (
    <div className="flex flex-col items-center justify-center h-screen bg-gradient-to-b from-purple-900 via-red-600 to-orange-500 text-white p-4">
      <div className="text-6xl mb-8">1:47</div>
      <div className="text-xl mb-4">Sunday, March 10</div>
      
      <div className="bg-white/20 backdrop-blur-md rounded-xl p-4 w-full max-w-sm">
        <div className="flex justify-between items-center mb-2">
          <div className="flex items-center">
            <AlertCircle className="mr-2" size={20} />
            <span className="font-semibold">DHRUVA</span>
          </div>
          <X size={20} />
        </div>
        <div className="text-sm mb-3">Emergency alerts.</div>
        <div className="flex space-x-2">
          <button className="bg-red-500 text-white px-4 py-2 rounded-full text-sm">
            Medical SOS
          </button>
          <button className="bg-red-500 text-white px-4 py-2 rounded-full text-sm">
            Drowning SOS
          </button>
        </div>
      </div>
      
      <div className="fixed bottom-4 left-0 right-0 flex justify-center space-x-4">
        <div className="bg-white/20 p-3 rounded-full">
          <svg xmlns="http://www.w3.org/2000/svg" fill="none" viewBox="0 0 24 24" stroke="currentColor" className="w-6 h-6">
            <path strokeLinecap="round" strokeLinejoin="round" strokeWidth={2} d="M5 3v4M3 5h4M6 17v4m-2-2h4m5-16l2.286 6.857L21 12l-5.714 2.143L13 21l-2.286-6.857L5 12l5.714-2.143L13 3z" />
          </svg>
        </div>
        <div className="bg-white/20 p-3 rounded-full">
          <svg xmlns="http://www.w3.org/2000/svg" fill="none" viewBox="0 0 24 24" stroke="currentColor" className="w-6 h-6">
            <path strokeLinecap="round" strokeLinejoin="round" strokeWidth={2} d="M3 9a2 2 0 012-2h.93a2 2 0 001.664-.89l.812-1.22A2 2 0 0110.07 4h3.86a2 2 0 011.664.89l.812 1.22A2 2 0 0018.07 7H19a2 2 0 012 2v9a2 2 0 01-2 2H5a2 2 0 01-2-2V9z" />
            <path strokeLinecap="round" strokeLinejoin="round" strokeWidth={2} d="M15 13a3 3 0 11-6 0 3 3 0 016 0z" />
          </svg>
        </div>
      </div>
    </div>
  );
};

export default EmergencyAlert;
